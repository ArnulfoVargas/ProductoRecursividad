// ProductoRec.cpp : Vargas Mejia Arnulfo
// ajsjajs le puse mal el nombre todo wey
// Este proyecto hara una multiplicacion por medio de la recursividad
//

#include <iostream>

int Multiply(int value1, int value2, int res);

int main()
{
    int val1 = 0, val2 = 0;

    std::cout << "Ingresa un numero\n";
    std::cin >> val1;

    std::cout << "Ingresa el numero por el cual lo quieres multiplicar\n";
    std::cin >> val2;

    system("CLS");

    std::cout << "El resultado es: " << Multiply(val1, val2, 0) <<std::endl;
}

int Multiply(int value1, int value2, int res) {

    if (value2 > 0) {
        res += value1;

        value2--;

        Multiply(value1, value2, res);
    }
    else {
        return res;
    }
}