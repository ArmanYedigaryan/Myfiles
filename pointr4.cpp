#include <iostream>

char*  toUpper(char *p){
	int i = 0;
	while (p[i] != '\0') {
		if (p[i] >= 'A' && p[i] <= 'Z'){
			++i;
		}
		if (p[i] >= 'a' || p[i] <= 'z'){
		     p[i] -= 32;
		      ++i;
    				      
		}
		else {
		   i++;
		}
	}
	return p;
}

int main() {

std::cout << "Enter a String and I give you to uppercase!" << std::endl;
char str[100];
std::cin >> str;
std::cout << toUpper(str) << std::endl;

}
