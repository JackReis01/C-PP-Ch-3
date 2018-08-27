#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userNam;


	cout << "What is your name?" << endl;
	cin >> userNam;
	
	// Basic Calc cout << "The first number 2 plus 5 = " << 2 + 5 << endl;
	int firstNum, secondNum, sum, sub, mult, div, rem;
	cout << "Enter a number. ";
	cin >> firstNum;
	cout << "Enter another number. ";
	cin >> secondNum;
	// Addition
	sum = firstNum + secondNum; // Math
	cout << "The sum of " << firstNum << " and " << secondNum << " equals " << sum << endl;
	//Subtraction
	sub = firstNum - secondNum; // Math
	cout << "The difference of " << firstNum << " and " << secondNum << " equals " << sub << endl;
	//Multiplication
	mult = firstNum * secondNum; // Math
	cout << "The total of " << firstNum << " and " << secondNum << " equals " << mult << endl;
	//Division
	div = firstNum / secondNum; // Math
	cout << "The quotient of " << firstNum << " and " << secondNum << " equals " << div << endl;
	//Remainder
	rem = firstNum % secondNum; // Math
	cout << "The remainder of " << firstNum << " and " << secondNum << " equals " << rem << endl;

	system("pause");
	return 0;
}
