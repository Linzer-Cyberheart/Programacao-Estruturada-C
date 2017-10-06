#include <iostream>

using namespace std;

void change(int &a, int &b);  //Referencia endere�o de mem�ria.

int main()
{

//Vari�veis a e b tem valor 10 e 20.

	int a = 10;
	int b = 20;
	
	cout << "Original value of A and B: " << a << " - " << b << endl;

//Vari�veis a e b mudam de valor.	

	change(a, b);
	cout << "The values of A and B has changed: " << a << " - " << b << endl;
	
}

void change(int &a, int &b)
{

//Trocamos o valor de a com b dentro da fun��o.

	int temp;
	
	temp = b;
	b = a;
	a = temp;
	
}
