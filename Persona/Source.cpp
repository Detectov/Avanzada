#include <iostream>
#include "Persona.h"

using namespace std;

int main() {
	Persona mi_persona;
	cout << "Nombre: " << mi_persona.getNombre() << endl;
	mi_persona.setNombre("David");
	cout << "Nombre: " << mi_persona.getNombre() << endl;
	return 0;
}