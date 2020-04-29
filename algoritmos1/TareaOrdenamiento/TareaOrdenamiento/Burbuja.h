#pragma once
#include<iostream>
#include"Metodo.h"
template<class T>
class Burbuja:public Metodo<T>
{
public:
	Burbuja(T* vector, int n) :Metodo<T>(vector, n) { this->vector = vector; this->n = n; }
	~Burbuja() {};
	void OrdenarAscendente();
	void OrdenarDescendente();

};

template<class T>
void Burbuja<T>::OrdenarAscendente()
{
	bool ordenado;
	for (int i = 0; i < this->n-1; i++)
	{
		ordenado = true;
		for (int j = 0; j < this->n - (i + 1); j++)
		{
			if (this->vector[j] > this->vector[j + 1])
			{
				int aux = this->vector[j];
				this->vector[j] = this->vector[j + 1];
				this->vector[j + 1] = aux;
				ordenado = false;
			}
		}
		if (ordenado) break;
	}
}

template<class T>
void Burbuja<T>::OrdenarDescendente()
{
	bool ordenado;
	for (int i = 0; i < this->n - 1; i++)
	{
		ordenado = true;
		for (int j = 0; j < this->n - (i + 1); j++)
		{
			if (this->vector[j] < this->vector[j + 1])
			{
				int aux = this->vector[j];
				this->vector[j] = this->vector[j + 1];
				this->vector[j + 1] = aux;
				ordenado = false;
			}
		}
		if (ordenado) break;
	}
}

