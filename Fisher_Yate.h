#pragma once
#include"Metodo.h"
template<typename T>
class Fisher :public Metodo<T>
{
public:
	Fisher(T* vector, int n) :Metodo<T>(vector, n) { this->vector = vector; this->n = n; }
	~Fisher() {}
	void OrdenarFisher();
};

template<typename T>
void Fisher<T>::OrdenarFisher() {

	for (int i = this->n - 1; i > 0; i--)
	{
		swap(this->vector[i],this->vector[rand() % (i + 1)]);
	}


}
