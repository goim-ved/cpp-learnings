#include <iostream>
using namespace std;

int main() {
    //declaring variable
    float a, b;
    //declaring operator
    char op;

    //input for variable
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    //input for operator
    cout << "Enter operator: ";
    cin >> op;

    switch (op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b == 0) {
                cout << "Cannot divide by zero";
            } else {
                cout << a / b;
            } break;
        default:
            cout << "Invalid operator!";
            break;
    }
    return 0;
}
