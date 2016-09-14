/**
Nombre(s): Juan Manuel Vazquez Jimenez
*/

#include "Nodo.h"

/**
Constructor de un nodo con un dato y el apuntador al siguiente y anterior nodo
@params Dato, *Sig
@result void
*/
Nodo::Nodo(int Dato , Nodo *Ant , Nodo *Sig)
{
	this->Dato = Dato;
	this->Ant = Ant;
	this->Sig = Sig;	
}
/**
Constructor de un nodo con un dato y el apuntador al siguiente y anterior nodo
@params Dato
@result void
*/
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Ant = NULL;
	this->Sig = NULL;
}
/**
asignamos un dato a un nodo
@params Dato
@result void
*/
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
/**
asignamos el elemento al que va a apuntar el nodo
@params *Ant
@result void
*/
void Nodo::setAnt(Nodo *Ant)
{
	this->Ant = Ant;
}
/**
asignamos el elemento al que va a apuntar el nodo
@params *sig
@result void
*/
void Nodo::setSig(Nodo *Sig)
{
	this->Sig = Sig;
}
/**
obtenemos el dato del nodo
@params void
@result int 
*/
int Nodo::getDato()
{
	return this->Dato;
}
/**
obtenemos el elemento anterior del nodo
@params void
@result Nodo
*/
Nodo *Nodo::getAnt()
{
	return this->Ant;
}
/**
obtenemos el elemento siguiente del nodo
@params void
@result Nodo
*/
Nodo *Nodo::getSig()
{
	return this->Sig;
}

