#include <iostream>

int main() {
    const int size = 13;
    char str[size] = "ChesseBurger";
    char rev[size] = "";
    int j = 0;
    for (int i = size - 2; i >= 0; --i, ++j)
    {
	    rev[j] = str[i];
    }
    std::cout << rev;
   
}
