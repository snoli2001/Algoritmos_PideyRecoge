#pragma once
#include "Principal.h"
template<typename T>
class Burbuja: public Principal<T>
{

public:
	Burbuja(vector<T> v):Principal<T>(v){}
	~Burbuja() {

	}
	void Ordenar() {

		for ( int i = 0; i < Principal<T>::val.size()-1; i++)
		{
			bool ordenado = true;

			for (int j = 0; j < (Principal<T>::val.size())-(i+1); j++)
			{
				if (Principal<T>::val[j] > Principal<T>::val[j+1]) {
					swap(Principal<T>::val[j+1], Principal<T>::val[j]);
					ordenado = false;
				}
			}
			if (ordenado) break;
		}
	}
};



