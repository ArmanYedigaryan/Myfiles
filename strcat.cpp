#include <iostream>
#include <cstring>

char* strcat(char* s1, char* s2) {
	char* tmp = new char[strlen(s1) + strlen(s2) + 1];
	for (int i = 0; i < strlen(s1); ++i) {
		tmp[i] = s1[i];
	}
	for (int i = strlen(s1), j = 0; j < strlen(s2); ++i, ++j) {
		tmp[i] = s2[j];
	}
	tmp[strlen(s1) + strlen(s2) + 1] = '\0';
	return tmp;
}

int main() {
	char s1[50] = "Arman";
	char s2[50] = "Yedigaryan";
	char* a = strcat(s1, s2);
	std::cout << a;
}
