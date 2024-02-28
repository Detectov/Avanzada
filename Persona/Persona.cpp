#include "Persona.h"

Persona::Persona()
{
	nombre = "";
	edad = 0;
	altura = 0.0;
}

Persona::~Persona()
{
}

void Persona::setNombre(string n)
{
	nombre = n;
}

void Persona::setEdad(int e)
{
	edad = e;
}

void Persona::setAltura(float a)
{
	altura = a;
}

string Persona::getNombre()
{
	return nombre;
}

int Persona::getEdad()
{
	return edad;
}

float Persona::getAltura()
{
	return altura;
}

void Persona::addHobby(string h)
{
	hobbies.push_back(h);
}

vector<string> Persona::getHobbies()
{
	return hobbies;
}

void Persona::sayHello()
{
}

void Persona::sayAge()
{
}

void Persona::birthday()
{
}

string Persona::sayChisme()
{
	return string();
}

void Persona::rememberChisme(string)
{
}

int Persona::getNumeroSecreto()
{
	return 0;
}

void Persona::piensaNumero()
{
}
