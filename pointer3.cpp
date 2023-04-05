#include <iostream>
#include <cstring>
//Իրականացնել ֆունկցիա, որը շրջում է C-ական տողը (char*)։


char* reverseString(char *arr) {
	int size = strlen(arr);
	for (int i = 0; i < size / 2; ++i)
	{
		char tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}	
	
	return arr;
}

int main()
{
	int size = 5;
	char arr[size] = "hello";
	std::cout << reverseString(arr);
}
