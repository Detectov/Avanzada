#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main(){
    string rutaArchivo = "info.txt";
    ofstream archivo;

    archivo.open(rutaArchivo.c_str(), fstream :: out);
    archivo << "Hola, Archivo!" << endl;
    archivo.close();
}