#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal{
    public:
        Animal(string);
        ~Animal();
        void imprimeRaza();
    private:

    protected:
        string raza;
        string nombre;
        bool esVertebrado;
        
};