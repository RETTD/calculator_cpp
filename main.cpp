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