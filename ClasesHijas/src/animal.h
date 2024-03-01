#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal{
    public:
        Animal(string);
        ~Animal();
        void imprimeRaza();
        void setRaza(string);
        void setVertebrado(bool);
    private:

    protected:
        string raza;
        string nombre;
        bool esVertebrado;
        
};