#pragma once
class Calculate
{
	public:
		Calculate(int FirstNumber, int SecondNumber);

		int Summa(int FirstNumber, int SecondNumber) {
			return FirstNumber + SecondNumber;
		}

		int Difference(int FirstNumber, int SecondNumber){
			return FirstNumber - SecondNumber;
		}
};

