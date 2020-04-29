#pragma once
#include<iostream>
using namespace std;
template<class T>
class Metodo
{
protected:
	int n;
	T* vector;
public:
	Metodo(T* vector, int n) :vector(vector), n(n) {}
	virtual void OrdenarAscendente() {};
	virtual void OrdenarDescendente() {};
	virtual void OrdenarFisher() {};
	void Imprimir();
};

template<class T>
void Metodo<T>::Imprimir()
{
	for (int i = 0; i < n ; i++)
	{
		cout << vector[i];
		if (i != n - 1)
		{
			cout << " , ";
		}
		else cout << endl;
	}
	cout << endl;
}