#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Persona
{
public:
	Persona();
	~Persona();
	
	void setNombre(string);
	void setEdad(int);
	void setAltura(float);
	string getNombre();
	int getEdad();
	float getAltura();
	
	void addHobby(string);
	vector<string> getHobbies();

	void sayHello();
	void sayAge();
	void birthday();

	string sayChisme();
	void rememberChisme(string);

	int getNumeroSecreto();

private:
	int numeroSecreto;
	void piensaNumero();
	string nombre;
	int edad;
	float altura;
	vector<string> hobbies;
	string chisme;
};