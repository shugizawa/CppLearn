#include <iostream>

int mul(int x, int y);

int main() {
	std::cout << mul(10, 2) << std::endl; 
	std::cout << mul(2, 2) << std::endl;
	std::cout << mul(-12, 3) << std::endl;
	return 0;
}

int mul(int x, int y) {
	return x * y;
}