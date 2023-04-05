#include <iostream>

char* strset(char* s, char ch){
	int i = 0;
	
	while (s[i] != '\0') {
		s[i] = ch;
		 i++;
	}
	return s;
}

int main() {
	char s[50];
	std::cout << "Enter a string and I change (%)!!!! " << std::endl;
	std::cin >> s;
	char ch = '%';
	
	
	std::cout << strset(s,ch);	
}
