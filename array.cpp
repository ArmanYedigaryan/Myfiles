#include <iostream>



int main() {
const int size = 2;
const int size2 = 4;
int arr[size] = {1, 2};
int arr2[size2] = {3,4};
int *ptr = arr;
int arr3[size2] = {};
for (int i = 0; i < size2; ++i) {
	arr3[i] = ptr[i];
	
	std::cout << arr3[i] << std::endl;
}


}
