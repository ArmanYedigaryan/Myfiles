#include <iostream>

int main() {
        const int size = 13;
        char str[13] = "CheeseBurger";

        for (int i = 0; i < size / 2; ++i){
                char tmp = str[i];
                str[i] = str[size - i - 2];
                str[size - i - 2] = tmp;
		if (str[size - i - 2] > 90) {
			str[size - i - 2] -= 20;
		}
        }
        std::cout << str << std::endl;
	
	
	

}                                           
~                                                                                                                         
