#include <iostream>


void sum_r(int* begin, int* end) {
	static int sum = 0;
	if(begin == end){
	   std::cout << sum << std::endl;
	   return;
	}
	sum += *begin;
	  
	sum_r(begin + 1, end);
	 
}

int main() {
	const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};
	sum_r(arr, arr + 5);
	
}
