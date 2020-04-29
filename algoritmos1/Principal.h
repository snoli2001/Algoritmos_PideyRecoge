#pragma once

#include <vector>
#include <iostream>
#include <conio.h>
using namespace std;


template<typename T>
class Principal
{
protected:
	vector<T> val;
public:
	Principal(vector<T> v) { val = v; }
	~Principal(){}
	virtual void Ordenar() abstract;
	void mostrar();

};


template<typename T>
void Principal<T>::mostrar() {
	
	for (int i = 0; i < val.size(); i++)
	{
		cout << val[i];
		if (i != val.size() - 1)
		{
			cout << " , ";
		}
		else cout << endl;
		
	}
}
