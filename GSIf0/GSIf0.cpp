#include <iostream>

int main() {
	int a, b;
	std::cout << "First num" << std::endl;
	std::cin >> a;
	std::cout << "Second num" << std::endl;
	std::cin >> b;
	if (a < b) std::cout << "A is lower than b";
	else std::cout << "A is not lower than b";
	return 0;
}