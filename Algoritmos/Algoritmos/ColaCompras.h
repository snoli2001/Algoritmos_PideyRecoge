#pragma once
#include "Nodo.h"

template<typename T>
class Cola
{
private:
	Nodo<T>* head;
	Nodo<T>* tail;
	int lenght;
public:
	Cola(Nodo<T>* h = nullptr,Nodo<T>* = nullptr, int l=0):( head=h, tail=t, lenght=l){}
	~Cola() {

	}
	void Encolar(T v);
	T Desencolar();
	int Size():
};

template<typename T>
void  Cola<T>::Encolar(T v) {
	Nodo<T>* nuevo = new Nodo<T>(v);
	nuevo->siguiente = tail;
	tail = nuevo;
}

template<typename T>
T Cola<T>::Desencolar() {
	Nodo<T>* aux = tail;
	while (aux->siguiente!=head)
	{
		aux = aux->siguiente;
	}
	T temp = tail->valor;
	delete aux->siguiente;
	tail = aux;
	return temp;

}
template<typename T>
int Cola<T>::Size() { return lenght; }