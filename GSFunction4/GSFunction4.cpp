//global variable page 47
#include <iostream>
#include <vector>
#include <>
void funс1();
void func2();
int count;  // Это глобальная переменная.
int main()
{
	int i; // Это локальная переменная.
	for (i = 0; i < 10; i++) {
		count = i * 2;
		funс1();
	}
	return 0; 
}
void func1()
{
	std::cout << "count: " << count; // Обращение к глобальной переменной.
		std::cout << '\n'; // Вывод символа новой строки.
	func2();
}
void func2()
{
	int count; // Это локальная переменная.
	for (count = 0; count < 3; count++) std::cout << '.';
}