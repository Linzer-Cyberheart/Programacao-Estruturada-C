#include <iostream>

using namespace std;

int global = 0;  //Variável global, ou seja, pode ser acessada em qualquer lugar do programa.

void scope(int x);

int main()
{
	int a = 1;
	
	/*
		Chaves definem o escopo.
		Variavel b pode ser acessada somente neste trecho.
	*/
	{
		int b = 1;
		cout << "More internal scope: " << b << endl;
	}
	scope(100);
	cout << "Local scope: " << a << endl;
}

void scope(int x)
{
	cout << "Local scope: " << x << endl;
	cout << "Global scope: " << global << endl;
}
