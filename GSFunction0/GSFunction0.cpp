#include <iostream>

void myfunc();

int main()
{
	std::cout << "in main" << std::endl;
	myfunc();
	std::cout << "again in main" << std::endl;
	return 0;
}
void myfunc() {
	std::cout << "in myfunc" << std::endl;
}
