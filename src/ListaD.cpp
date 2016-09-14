/**
Nombre(s): Juan Manuel Vazquez Jimenez
*/
#include "ListaD.h"
/**
Constructor con de una lissta vacia
@params void
@result void
*/
ListaD::ListaD() 
{
	this->H = NULL;
	this->T = NULL;
}
/**
Constructor con de una lissta con un elemento 
@params Dato
@result void
*/
ListaD::ListaD(int Dato)
{
	Nodo *aux = new Nodo(Dato);
	this->H = aux;
	this->T = aux;
}
/**
Comprobamos si una lista esta vacia
@params void
@result bool 
*/
bool ListaD::ListaVacia()
{
	if ((this->H == NULL) && (this->T == NULL))
	{
		return true;
	}
	else
	{
		return false;
	}	
}
/**
Añadimos un elemento al inicio de la lista
@params Dato
@result void
*/
void ListaD::AddInicio(int Dato)
{
	Nodo *aux = new Nodo(Dato,this->T,this->H);
	if (ListaVacia())
	{
		this->T = aux;
	}
	this->H = aux;
}
/**
Añadimos un elemento al final de la lista
@params Dato
@result void
*/
void ListaD::AddFinal(int Dato)
{
	Nodo *aux = new Nodo(Dato);	
	if (!ListaVacia())
	{
		aux->setAnt(T);
		T->setSig(aux);
		T = aux;		
	}
	else
	{
		this->H = aux;
		this->T = aux;
	}		
}
/**
Añadimos un elemento respecto a una referencia
@params Dato, Ref
@result void
*/
void ListaD::AddRef(int Dato, int Ref)
{
	if (ListaVacia())
	{
		Nodo *aux = new Nodo(Dato);
		this->H = aux;
		this->T = this->H;
		std::cout<<"No se encontro la referencia porque la lista esta vacia"<<std::endl;
		return ;		
	}
	Nodo *aux = this->H;
	while((aux->getDato()!= Ref) && (aux != this->T))
	{
		aux = aux->getSig();
	}
	if (aux != NULL)
	{
		Nodo *aux2 = new Nodo(Dato,aux,aux->getSig());
		Nodo *aux3 = aux->getSig();
		aux->setSig(aux2);
		aux3->setAnt(aux2);
	}
	else
	{
		std::cout<<"no se encuentra referencia"<<std::endl;
	}
}
/**
removemos al inicio de la lista
@params void
@result int
*/
int ListaD::RemoveInicio()
{
	if (!ListaVacia())
	{
		int Dato = this->H->getDato();	
		if (this->H == NULL)
		{
			this->T = NULL;
		}
		this->H = this->H->getSig();
		this->H->setAnt(NULL);
		return Dato;
	}
	else
	{
		std::cout<<"lista vacia"<<std::endl;	
		return NULL;	
	}	
	
}
/**
removemos el final de la lista
@params void
@result int
*/
int ListaD::RemoveFinal()
{
	if (ListaVacia())
	{
		std::cout<<"lista vacia"<<std::endl;
	}
	int Dato = T->getDato();
	if (this->H != this->T)
	{
		Nodo *aux = this->H;		
		while(aux->getSig()!= this->T){
			aux = aux->getSig();
		}
		this->T = aux;
		this->T->setSig(NULL);
	}
	else
	{
		this->H = NULL;
		this->T = NULL;
	}
	return Dato;
}
/**
Buscamos un elemento en la lista
@params Dato
@result Nodo
*/
Nodo *ListaD::BuscarElemento(int Dato)
{ 
	if (ListaVacia())
	{
		std::cout<<"No se encuentra elemento"<<std::endl;
		return NULL;		
	}
	Nodo *aux = this->H;
	while((aux->getDato()) != (Dato && aux!=NULL))
	{
		aux = aux->getSig();
		if (aux == NULL)
		{
			std::cout<<"No se encuentra elemento"<<std::endl;
			return NULL;
		}
	}
	if (aux->getDato() == Dato)
	{
		std::cout<<aux->getDato()<<" elemento encontrado"<<std::endl;	
	}
	return aux;
}
/**
Removemos un nodo respecto a una referencia y guardamos el dato
@params Ref
@result int
*/
int  ListaD::RemoveRef(int Ref)
{
	if (ListaVacia())
	{
		std::cout<<"lista vacia, no hay ref"<<std::endl;
		return 0;		
	}
	Nodo *aux = this->H;
	Nodo *aux2 = this->H;
	while((aux->getDato() != Ref) && (aux != this->T))
	{
		aux = aux->getSig();
	}
	while(aux2->getSig()!=aux)
	{
		aux2 = aux2->getSig();
	}
	Nodo *aux3 = aux->getSig();
	if (aux != NULL)
	{		
		aux2->setSig(aux->getSig());
		aux3->setAnt(aux2);
	}
	else
	{
		std::cout<<"No existe la referencia en lista"<<std::endl;
		return NULL;
	}
}
/**
eliminamos todos los elementos de la lista 
@params void
@result void
*/
void ListaD::VaciarLista()
{
	this->H = NULL;
	this->T = NULL;	
}
/**
mostramos todos los elementos de la lista
@params void
@result void
*/
void ListaD::Show()
{
	Nodo* aux = this->H;
	while(aux != NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}