#include <iostream>
#include <cstring>
int main() {
	char s1[20] = "Arman";
	char s2[20] = "Yedigaryan";
	char s3[20];
	for (int i = 0; i < strlen(s1); ++i) {
		s3[i] = s1[i];
	}
	for (int i = strlen(s1), j = 0; j < strlen(s2); ++j, ++i) {
		s3[i] = s2[j];
	}
	std::cout << s3;
}
