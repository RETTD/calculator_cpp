//q: i want create simple calculator in c++ with the best practices and solid, dry, kiss principles

#include <iostream>
#include <string>

using namespace std;


class Calculator
{
public:
    Calculator() = default;
    ~Calculator() = default;

    void calculate()
    {
        cout << "Enter the first number: ";
        cin >> firstNumber;
        cout << "Enter the second number: ";
        cin >> secondNumber;
        cout << "Enter the operation: ";
        cin >> operation;

        if (operation == "+")
        {
            cout << "Result: " << firstNumber + secondNumber << endl;
        }
        else if (operation == "-")
        {
            cout << "Result: " << firstNumber - secondNumber << endl;
        }
        else if (operation == "*")
        {
            cout << "Result: " << firstNumber * secondNumber << endl;
        }
        else if (operation == "/")
        {
            cout << "Result: " << firstNumber / secondNumber << endl;
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
    }
    
private:
    double firstNumber;
    double secondNumber;
    string operation;
};

int main()
{
    Calculator calculator;
    calculator.calculate();
    return 0;
}

// Path: main.cpp

//q: i get error: 'undefined reference to 'WinMain''