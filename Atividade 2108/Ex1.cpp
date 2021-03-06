#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void mostraMaiores(int x[10])
{
	int soma = 0;
	double media = 0;
	int contador = 0;
	int maior = 0;
	
	for(int i = 0; i < 10; ++i)
	{
		soma += x[i];
		contador++;
	}
		
	media = (double)soma / (double)contador;
	
	for(int i = 0; i < 10; ++i)
	{
		if(x[i] > media)
		{
			maior++;
		}
	}
	
	cout << setprecision(1);
	
	cout << maior << " elementos estao acima da media!" << endl;
}

int main(int argc, char** argv)
{
	int array[10];
	
	for(int i = 0; i < 10; ++i)
	{
		cout << "Digite o valor " << i + 1 << ":";
		cin >> array[i];
	}
	
	mostraMaiores(array);
	
	return 0;
}