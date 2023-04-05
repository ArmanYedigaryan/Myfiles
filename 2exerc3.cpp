#include <iostream>

int main() {
	const int size = 13;
	char string[size] = "CheeseBurger";
	char p = string[0];

	/*for (int i = 1; i < size - 1;++i) {
		if(p > string[i]){
		p = string[i];
		}
	
	}	
	std::cout << p;
*/
	for (int i = 1;i < size - 1;++i){
		if(p < string[i]) {
		 p = string[i];
	        }
	}
	std::cout << p;
}
