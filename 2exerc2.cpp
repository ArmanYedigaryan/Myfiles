#include <iostream>

int main() {
	const int size = 10;
	int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* p = &arr[0];
	int* p1; 
	std::cout << p << std::endl;
	for (int i = 0; i < size; ++i) {
	        p1 =&arr[i];
		std::cout << *p1 <<std::endl;	
	}


}
