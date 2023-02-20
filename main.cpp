//20.02.23 - Perekhod I.S
//Interactive-calculator + fluent

#include <iostream>
#include "calculate.h"

int main()
{
	std::cout << "Hello, Me - Interactive Calculator by Perekhod v1.1!\n\n";
repeat: // Return if the user wants to continue using the calculator (lines 10 and 93)
	std::cout << "Please enter two integers on which the mathematical operations will be performed:\n";

	int numberOne, numberTwo;
	std::cin >> numberOne >> numberTwo;

	char menu;

	std::cout << "What mathematical operation do you want to apply to the entered numbers?\n";
	std::cout << "List of implemented operations in this version: '+' '-' '*' '/' '!' '^' \n";

	std::cin >> menu;

	switch (menu)
	{
	case '+':
		std::cout << numberOne << " + " << numberTwo << " = " << sum(numberOne,numberTwo) << "\n";
		break;

	case '-':
		std::cout << numberOne << " - " << numberTwo << " = " << diff(numberOne, numberTwo) << "\n";
		break;

	case '*':
		std::cout << numberOne << " * " << numberTwo << " = " << multiplication(numberOne, numberTwo) << "\n";
		break;

	case '/':
		if (numberTwo == 0)
		{
			std::cout << "Oh, you can't divide by zero! Enter another divisor:\n";
			std::cin >> numberTwo;
			goto zero;
		}
	zero:// Return if user divides by 0(44 and 42 )
		std::cout << numberOne << " / " << numberTwo << " = " << cleavage(numberOne, numberTwo) << "\n";
		break;

	case '!':
		std::cout << "You requested the 'Factorial' operation, but it only works on one number, and you entered two.\n";
		Factrepeat:
		std::cout << "From what number will we calculate the 'Factorial'? " << numberOne << " or " << numberTwo << " ? \n";
		int temp;
		std::cin >> temp;
		if (temp==numberOne)
		{
			std::cout << "Factorial of a number " << numberOne << " = " << fact(numberOne) << "\n";
			break;
		}
		else if (temp == numberTwo)
		{
			std::cout << "Factorial of a number " << numberTwo << " = " << fact(numberTwo) << "\n";
			break;
		}
		else
		{
			std::cout << "Oops!Enter " << numberOne << " or " << numberTwo << " ! " << std::endl;
			goto Factrepeat;
		}

		case '^':
		{
			std::cout << numberOne << " to the extent " << numberTwo << " = " << exp(numberOne,numberTwo) << "\n";
			break;
		}
		default:
			std::cout << "\nOops... This symbol does not apply to implemented operations in the version 1.1!\n\n";
		}

	std::cout << "To exit the interactive calculator press 'q', for the next operation 'r'\n";

inccorect:// Return if the user entered the wrong character (lines 81 and 99)

	char end;
	std::cin >> end;

	switch (end)
	{
	case 'q':
		break;

	case 'r':
		std::cout << "\n";
		goto repeat;
		break;

	default:
		std::cout << "Oops, you entered the wrong character.!\n";
		std::cout << "Reminder - to exit the interactive calculator, press 'q', to reuse 'r'\n";
		goto inccorect;
		break;
	}
}