#include <iostream>

using namespace std;

void change(int &a, int &b);  //Referencia endereço de memória.

int main()
{

//Variáveis a e b tem valor 10 e 20.

	int a = 10;
	int b = 20;
	
	cout << "Original value of A and B: " << a << " - " << b << endl;

//Variáveis a e b mudam de valor.	

	change(a, b);
	cout << "The values of A and B has changed: " << a << " - " << b << endl;
	
}

void change(int &a, int &b)
{

//Trocamos o valor de a com b dentro da função.

	int temp;
	
	temp = b;
	b = a;
	a = temp;
	
}
