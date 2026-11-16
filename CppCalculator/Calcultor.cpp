#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int choice;
    double num1, num2, result;
    cout << "===============================\n";
    cout << "     MENU DRIVEN CALCULATOR     \n";
    cout << "===============================\n";

    do
    {
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%)\n";
        cout << "6. Power (^)\n";
        cout << "7. Exit\n"; // If the user chooses 7, the program will exit.

        cout << "Enter your choice (1-7): ";
        cin >> choice;

        if (choice < 1 || choice > 7)
        {
            cout << "Invalid choice! Please enter a number between 1 and 7.\n";
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed.\n";
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;
        case 5:
            if (num2 == 0)
            {
                cout << "Error: Modulus by zero!";
            }
            else if (floor(num1) != num1 ||
                     floor(num2) != num2)
            {
                cout << "Error: Modulus operation requires integer operands.\n";
            }
            else
            {
                result = fmod(num1, num2);
                cout << "Result: " << result << endl;
            }
            break;
        case 6:
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 7:
            cout << "Exiting the calculator.\n";
            break;
        }

    } while (choice != 7);
    return 0;
}