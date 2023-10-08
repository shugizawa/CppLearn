
#include <iostream>
#include <cstdlib>

int MyAbs(int a) {
	return abs(a);
}

int main()
{
	int a;
	std::cin >> a;
	std::cout << MyAbs(a);
	return 0;
}
