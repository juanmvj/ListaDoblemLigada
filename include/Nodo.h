/**
Nombre(s): Juan Manuel Vazquez Jimenez
descripcion: La clase Nodo, con atributos y metodos necesarios 
para esta estructura de datos funcione como debe de ser.
*/
#include <iostream>

class Nodo
{
private:
	//atributos
	int Dato;
	Nodo *Sig;
	Nodo *Ant;
public:
	//constructores
	Nodo(int Dato , Nodo* Ant , Nodo* Sig);
	Nodo(int Dato);
	//seters y geters
	void setDato(int Dato);
	void setSig(Nodo *Sig);
	void setAnt(Nodo *Ant);
	int getDato();
	Nodo *getSig();
	Nodo *getAnt();
};

