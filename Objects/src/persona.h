#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Persona{
    public: 
        Persona();
        ~Persona();

        

    private:
        string nombre;
        int edad;
        float altura;
        vector<string> hobbies;

};