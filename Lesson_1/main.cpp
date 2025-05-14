#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "First Number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /, ^, s (sqrt)): ";
    cin >> operation;

    if (operation == 's') {
        if (num1 >= 0) {
            cout << "Result: " << sqrt(num1) << endl;
        } else {
            cout << "Error: sqrt -number" << endl;
        }
    } else {
        cout << "Enter number two: ";
        cin >> num2;

        switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error:division by zero" << endl;
            }
            break;
        case '^':
            cout << "Result: " << pow(num1, num2) << endl;
            break;
        default:
            cout << "Error: invalid operation" << endl;
        }
    }
    return 0;
}
