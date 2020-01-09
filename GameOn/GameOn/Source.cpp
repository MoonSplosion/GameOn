#include <iostream>
using namespace std;
void AddTwoNumbers(int firstNumber, int secondNumber);


void main()
{
	cout << "Game On!" << endl;
	AddTwoNumbers(3, 5);
	
}

void AddTwoNumbers(int firstNumber, int secondNumber)
{
	int result = 0;
	result = firstNumber + secondNumber;
	std::cout << firstNumber << "+" << secondNumber << "=" << result << endl;
}