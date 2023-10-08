#include <iostream>
#include <stdlib.h>
#include <time.h>

int GetRandomNumber(int min, int max)
{
	srand(time(NULL));
	int num = min + rand() % (max - min + 1);
	return num;
}

bool check = true;
int min, max, UserTry;
int main() {
	std::cout << "Hello, let's play :)" << std::endl << "Try to guess number that I choose" << std::endl << std::endl;
	std::cout << "Choose min limit: ";
	std::cin >> min;
	std::cout << "Choose max limit: ";
	std::cin >> max;

	int num = GetRandomNumber(min, max); //RandomNumber from GetRandomNumber
	int PickedNum; // number that user picked

	std::cout << "NOW TRY TO GUESS >:)" << std::endl << "Write a number" << std::endl;
	while (check)
	{
		std::cin >> PickedNum;
		if (PickedNum < num)
		{
			std::cout << "Your number is lower than my number" << std::endl << "Try again" << std::endl;
			UserTry++;
			check = true;
		}
		else if (PickedNum > num)
		{
			std::cout << "Your number is higher than my number" << std::endl << "Try again" << std::endl;
			UserTry++;
			check = true;
		}
		else
		{
			std::cout << "Accept my Congratulation!!!!!!!!!! You guess right!!!" << std::endl << std::endl;
			std::cout << "					{{|!(>o< )!|}}				" << std::endl << std::endl;
			UserTry++;
			check = false;
		}
	}
	std::cout << "For you it takes " << UserTry << " attempts." << std::endl;
	return 0;
}