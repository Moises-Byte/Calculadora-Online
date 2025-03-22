#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

float sumar(float f, float y) { return f + y; }
float restar(float f, float y) { return f - y; }
float multiplicar(float f, float y) { return f * y; }
float dividir(float f, float y) {
    if (y != 0) {
        return f / y;
    } else {
        return 0;
    }
}
float potenciar(float base, float exponente) {
    float resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}
float raiz(float numero) {
    if (numero < 0) return 0;
    float q = numero, y = 1;
    while (q - y > 0.0001) {
        q = (q + y) / 2;
        y = numero / q;
    }
    return q;
}
int factorial(int l) {
    if (l < 0) return 0;
    int resultado = 1;
    for (int i = 1; i <= l; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int opciones;
    do {
        cout << "\nBienvenido a la Calculadora Online";
        cout << "\n1. Sumar";
        cout << "\n2. Restar";
        cout << "\n3. Multiplicar";
        cout << "\n4. Dividir";
        cout << "\n5. Potencia";
        cout << "\n6. Raiz Cuadrada";
        cout << "\n7. Factorial";
        cout << "\n8. Salir";
        cout << "\nSeleccione una de las opciones: ";
        cin >> opciones;

        switch (opciones) {
            case 1: {
                float number1, number2;
                cout << "Ingrese el primer numero: "; cin >> number1;
                cout << "Ingrese el segundo numero: "; cin >> number2;
                cout << "Resultado: " << sumar(number1, number2); 
                break;
            }
            case 2: {
                float number1, number2;
                cout << "Ingrese el primer numero: "; cin >> number1;
                cout << "Ingrese el segundo numero: "; cin >> number2;
                cout << "Resultado: " << restar(number1, number2);
                break;
            }
            case 3: {
                float number1, number2;
                cout << "Ingrese el primer numero: "; cin >> number1;
                cout << "Ingrese el segundo numero: "; cin >> number2;
                cout << "Resultado: " << multiplicar(number1, number2);
                break;
            }
            case 4: {
                float number1, number2;
                cout << "Ingrese el primer numero: "; cin >> number1;
                cout << "Ingrese el segundo numero: "; cin >> number2;
                if (number2 == 0) cout << "No se puede dividir por cero";
                else cout << "Resultado: " << dividir(number1, number2);
                break;
            }
            case 5: { 
                float number1, number2;
                cout << "Ingrese la base para la potencia: "; cin >> number1;
                cout << "Ingrese el exponente para la potencia: "; cin >> number2;
                cout << "Resultado: " << potenciar(number1, number2);
                break;
            }
            case 6: {
                float number;
                cout << "Ingrese el numero: "; cin >> number;
                if (number < 0) cout << "No se puede calcular la raiz de un numero negativo";
                else cout << "Resultado: " << raiz(number);
                break;
            }
            case 7: {
                int number;
                cout << "Ingrese un numero entero: "; cin >> number;
                if (number < 0) cout << "No se puede calcular el factorial de un numero negativo";
                else cout << "Resultado: " << factorial(number);
                break;
            }
            case 8:
                cout << "Apagando programa...";
                break;
            default:
                cout << "Opcion invalida.";
        }
        cout << "\n";
    } while (opciones != 8);

    return 0;
}