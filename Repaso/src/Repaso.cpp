//Librerías
#include <iostream> //iostream.h
//#include "" // librerías o archivos externos .h (headers)

using namespace std;

//Definición de funciones
void sum(int a, int b);
//main
int main() {
    int a = 5;
    //sum(5,a);
    //Float
    int b = 5;
    //Double
    double c = 5.88;
    //char
    char d = ' ';
    a = 100;
    //cout << (int)d << endl;
    //cout << (char)a << endl;

    a = 5;
    b = 2;
    c = a / (double)b;
    d = c;
    cout << c << endl;

    return 0;
}

//Funciones
void sum(int a, int b) {
    int c = a + b;
    cout << c << endl;
}
