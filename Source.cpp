
#include"Burbuja.h"
#include<conio.h>

using namespace std;
void main()
{
	int a[] = { 4,5,6,8,10,1,2,3 };

	Metodo<int>* p = new Burbuja<int>(a, 8);
	p->OrdenarAscendente();
	p->Imprimir();
	p->OrdenarDescendente();
	p->Imprimir();
	_getch();
}