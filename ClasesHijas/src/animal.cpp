#include "animal.h"

Animal:: Animal(string n){
    nombre = n;
    raza = "";
    esVertebrado = true;
}

Animal::~Animal(){

}

void Animal ::imprimeRaza(){
    cout << "Mi raza es: " << raza << endl;
}