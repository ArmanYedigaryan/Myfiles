#include <iostream>
#include <cstring>

char* concat(char* s1, char* s2) {
	char* arr = new char[strlen(s1) + strlen(s2) + 1];
	for (int i = 0; i < strlen(s1); ++i) {
		arr[i] = s1[i];
	}
	for (int i = strlen(s1), j = 0; j < strlen(s2); ++j, ++i) {
		arr[i] = s2[j];
	}
	arr[strlen(s1) + strlen(s2) + 1] = '\0';
	return arr;
}

int main() {
	char s1[20] = "Arman";
	char s2[20] = "Yedigaryan";
	char* s3 = concat(s1, s2); 
	std::cout << s3;
}
