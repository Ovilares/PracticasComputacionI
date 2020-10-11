/* Calculadora
Autor: Oliver Josué Padilla Quintanilla
Fecha: 11 de octubre de 2020 
*/


#include <iostream>
using namespace std;

int main()
{
    // Declarar variables
    float a;
    char b;
    float c;
    float d;
    int e;

    // Proceso
    cout << "En este programa puede realizar operaciones matematicas basicas entre dos numeros" << endl;
    cout << "Ingrese el primer numero" << endl;
    cin >> a;
    cout << "Ingrese simbolo de operacion a realizar: Suma (+), Resta (-), Multiplicacion (*), Division (/), o Modulo (%)" << endl;
    cin >> b;
    if (b == '%')
    {
        int a;
        int c;
        cout << "Ingrese un primer numero entero" << endl;
        cin >> a;
        cout << "ingrese un segundo numero entero" << endl;
        cin >> c;
        e = a % c;
        cout << "El resultado es:" << e << endl;
        return "-";
    }
    cout << "Ingrese el segundo numero" << endl;
    cin >> c;
    
    // Resultados
    if ((b == '/') && (c == 0))
    {
        cout << "Operacion no valida";
    }
    else if (b == '+')
    {
        d = a + c;
        cout << "El resultado es:" << d << endl;
    }
    else if (b == '*')
    {
        d = a * c;
        cout << "El resultado es:" << d << endl;
    }
    else if (b == '-')
    {
        d = a - c;
        cout << "El resultado es:" << d << endl;
    }
    else if (b == '/')
    {
        d = a / c;
        cout << "El resultado es:" << d << endl;
    }
    else
    {
        cout << "Operacion no identificada";
    }
}
