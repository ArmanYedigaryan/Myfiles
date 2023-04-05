#include <iostream>

int main() {

	int a = 34;
	char b = 'A';
	short c = 2;
	int* p = &a;
	char* pb = &b;
        short* pc = &c;
	
	
	std::cout << p << std::endl;
	std::cout << p + 1 << std::endl;
	std::cout << pc << std::endl;


}
