#include "Fisher_Yate.h"
#include <time.h>
#include "Burbuja.h"

int main() {

	srand(time(NULL));
	vector<int> array = {5,1,8,2,9,6};
	Fisher<int>* fish = new Fisher<int>(array);
	fish->mostrar();
	fish->Ordenar();
	fish->mostrar();
	Burbuja<int>* buble = new Burbuja<int>(array);
	buble->Ordenar();
	buble->mostrar();
	return 0;
}