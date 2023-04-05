#include <iostream>
//Իրականացնել strlen(str); ֆունկցիա, որը ստանում է C-ական տող և վերադարձնում է տողի սիմվոլների քանակը (մինչև  O)



int lenghtOfString(char *p){

	int count = 0;
	while (*p != '\0'){
		count++;
		p++;
	}

	return count;
}

int main() {

	/*char str[100];
	int i,lenght = 0;
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;

	for (i = 0; str[i] != '\0'; i++) {
		lenght++;	
	}
	std::cout << "Lenght of array equal:" << lenght << std::endl;
*/

	char str[100];
	int lenght;
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;
	lenght = lenghtOfString(str);
	std::cout << "Lenght is " << lenght << std::endl;





}


