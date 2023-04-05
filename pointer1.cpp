#include <iostream>


int binarSearch(int arr[], int size, int tmp) {
	int low = 0;
	int max = size - 1;
	while (low <= max) {
		int mid = (low + max)/2;
		if (arr[mid] == tmp) {
			return mid;
		}
		if (arr[mid] < tmp) {
			low = mid + 1;
		}
		else {
			max = mid - 1;
		}
	}
	return -1;
}

int main() {
	int size = 7;
	int arr[size] = {10, 20, 30, 35, 40, 50, 55};
	int tmp;
	std::cout << "Enter a number and i say you this number belong to array or not" << std::endl;
	std::cin >> tmp;
	std::cout << binarSearch(arr, size, tmp);
}
