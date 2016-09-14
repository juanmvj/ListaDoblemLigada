/**
Nombre(s): Juan Manuel Vazquez Jimenez
*/
#include "ListaD.h"

int main()
{
	ListaD h = ListaD(3);
	h.AddInicio(4);
	h.AddFinal(5);

	h.RemoveInicio();
	h.RemoveFinal();

	h.VaciarLista();
	h.AddInicio(4);
	h.AddFinal(5);
	h.AddFinal(5);

	h.AddRef(7,5);
	h.RemoveRef(5);

	h.Show();
	return 0;
}