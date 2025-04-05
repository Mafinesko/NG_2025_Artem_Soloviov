#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /, ^, s (sqrt)): ";
    cin >> operation;

    if (operation == 's') {
        if (num1 >= 0) {
            cout << "Результат: " << sqrt(num1) << endl;
        } else {
            cout << "Ошибка: квадратный корень из отрицательного числа" << endl;
        }
    } else {
        cout << "Введите второе число: ";
        cin >> num2;

        switch (operation) {
        case '+':
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Результат: " << num1 / num2 << endl;
            } else {
                cout << "Ошибка: деление на ноль" << endl;
            }
            break;
        case '^':
            cout << "Результат: " << pow(num1, num2) << endl;
            break;
        default:
            cout << "Ошибка: недопустимая операция" << endl;
        }
    }
    return 0;
}
