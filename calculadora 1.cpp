#include <iostream>

using namespace std;

int main() {
    char operacion;
    double num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operacion) {
        case '+':
            cout << "El resultado de la suma es: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "El resultado de la resta es: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "El resultado de la division es: " << num1 / num2 << endl;
            else
                cout << "Error: division por cero" << endl;
            break;
        default:
            cout << "Operacion invalida" << endl;
    }

    return 0;
}
