#include <iostream>
//Իրականացնել char* strcat(char* s1, char* s2); ֆունկցիան, որը ստանում է երկու C տողեր և կոնկատենացնում (միացնում) տողերը իրար՝ պահելով առաջին արգումենտում։

char* strcat(char *s1, char *s2){
	char* tmp = s1;
	while (*s1 !='\0') {
		tmp++;
	}
	while (*s2 != '\0') {
		*tmp++ = *s2++;
	}
	return s1;
}

int main() {
	char s1[50];
	char s3[50];
	std::cout << "Enter first string!!" << std::endl;
	std::cin >> s1;
	std::cout << "Enter second string!!" <<std::endl;
	std::cin >> s2;
	std::cout << "ddssd";
	std::cout << strcat(s1, s2) << std::endl;


}
