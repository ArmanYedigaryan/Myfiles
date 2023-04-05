#include <iostream>


int main() {
	int size = 0;
	std::cout << "Enter array size";
	std::cin >> size;
	int *arr = new int[size];

	std::cout << arr << std::endl;
        std::cout << arr + 1 << std::endl;
	std::cout << arr + 2 << std::endl;

}



