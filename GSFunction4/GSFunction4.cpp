//global variable page 47
#include <iostream>
#include <vector>
#include <>
void fun�1();
void func2();
int count;  // ��� ���������� ����������.
int main()
{
	int i; // ��� ��������� ����������.
	for (i = 0; i < 10; i++) {
		count = i * 2;
		fun�1();
	}
	return 0; 
}
void func1()
{
	std::cout << "count: " << count; // ��������� � ���������� ����������.
		std::cout << '\n'; // ����� ������� ����� ������.
	func2();
}
void func2()
{
	int count; // ��� ��������� ����������.
	for (count = 0; count < 3; count++) std::cout << '.';
}