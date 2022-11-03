// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    char operation;
    double num1;
    double num2;
    double result;

    std::cout << "Welcome to the calculator program\n";
    std::cout << "Please enter one of the following operations\n";

    std::cout << "+, -, * or / ";
    std::cin >> operation;
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/')
    {
        std::cout << "+, -, * or / ";
        std::cin.ignore(1);
        std::cin >> operation;
    } 

    std::cout << "Enter number 1: ";
    while (!(std::cin >> num1)) {
        std::cout << "Please enter a number\n";
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }

    std::cout << "Enter number 2: ";
    while (!(std::cin >> num2)) {
        std::cout << "Please enter a number\n";
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }

        switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "The result of " << num1 << " + " << num2 << " is " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "The result of " << num1 << " - " << num2 << " is " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "The result of " << num1 << " * " << num2 << " is " << result;
            break;
        case '/':
            result = num1 / num2;
            if (num2 == 0) {
                std::cout << "You cannot divide by 0";
            }
            else {
                std::cout << "The result of " << num1 << " / " << num2 << " is " << result;
            }
            break;
        default:
            std::cout << "That was not a valid input";
            break;

    }

}


