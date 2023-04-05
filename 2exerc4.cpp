#include <iostream>


int main() {
	const int size = 13;
	char str[size] = "ChesseBurger";
	int count = 0;
	
	for (int i = 0;i < size - 1;++i){
		if(str[i] == 'e'|| str[i] == 'u'){
			count++;
		}
	}
	std::cout << count<< '\n';

}
