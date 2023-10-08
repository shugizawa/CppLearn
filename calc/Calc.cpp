//in: {n1 + n2 + (...) + ni} out: {result of sum}
#include <iostream>
#include <string>
#include <vector>

void Start() {
	system("title Lineat Calculator On C++");
	std::cout << "******************  Nice to meet you. I represent you linear calculator that support addition and subtraction" << std::endl;
	std::cout << "******************  Application developed by Petrov Nikita." << std::endl;
	std::cout << "******************  Example input: 5+5-2" << std::endl;
	std::cout << "******************  ATTENTION!" << std::endl;
	std::cout << "******************  The program does not work with spaces" << std::endl;
	std::cout << "******************  To close CONSOLE type 'close' without quotes" << std::endl;

}
bool enable = true;
int main() {
	Start();
	while (enable) {
		std::cout << ">> ";
		std::string Expression{};
		std::string Nums;
		std::vector<std::string> ExpressionAction;
		double Result = 0;
		bool CheckAction = false; //is this first action? 
		
		std::cin >> Expression; // Input Expression
		//CLOSE and check first SYMB
		if (Expression == "close" or Expression == "Close") 
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}
		else if (std::string(1, Expression[0]) == "+" and !isdigit(Expression[1]))
		{
			std::cout << "Expression can't start with '+' if next symbol is not number! Try again..." << std::endl;
			break;
		}
		else if (std::string(1, Expression[0]) == "-" and !isdigit(Expression[1]))
		{
			std::cout << "Expression can't start with '-' if next symbol is not number! ! Try again..." << std::endl;
			break;
		}

		//Do Symbols array form Expression
		for (int i = 0; i < Expression.length(); i++)
		{
			if (Expression[i] != '+' and Expression[i] != '-')
			{
				Nums += Expression[i];
			}
			else
			{
				ExpressionAction.push_back(Nums);
				ExpressionAction.push_back(std::string(1, Expression[i]));
				Nums.clear();
			}
		}
		if (Nums.length() > 0)
		{
			ExpressionAction.push_back(Nums);
		}

		for (int i = 0; i < ExpressionAction.size() - 1; i++)
		{
			if (ExpressionAction[i] == "+" and CheckAction == false)
			{
				Result += stod(ExpressionAction[i - 1]) + stod(ExpressionAction[i + 1]);
				CheckAction = true;

			}
			else if (ExpressionAction[i] == "+" and CheckAction == true)
			{
				Result += stod(ExpressionAction[i + 1]);
			}

			if (ExpressionAction[i] == "-" and CheckAction == false)
			{
				Result += stod(ExpressionAction[i - 1]) - stod(ExpressionAction[i + 1]);
				CheckAction = true;

			}
			else if (ExpressionAction[i] == "-" and CheckAction == true)
			{
				Result -= stod(ExpressionAction[i + 1]);
			}
		}

		//Check any errors in input

		if (!CheckAction) {
			std::cout << "You made a mistake in expression. Try again! Be careful next time." << std::endl;
		}
		else
		{
			std::cout << "Answer: " << Result << std::endl;
		}
		std::cin.ignore(100, '\n');
	}
	system("pause");
}