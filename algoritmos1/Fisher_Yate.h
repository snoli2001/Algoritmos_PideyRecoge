#pragma once
#include "Principal.h"

template<typename T>
class Fisher:public Principal<T>
{
public:
	Fisher(vector<T> v) :Principal<T>(v){}
	~Fisher(){}
	void Ordenar();
};

template<typename T>
void Fisher<T>::Ordenar() {
	
	for (int i = Principal<T>::val.size()-1; i >0; i--)
	{
		swap(Principal<T>::val[i], Principal<T>::val[rand() % (i + 1)]);
	}

	
}



