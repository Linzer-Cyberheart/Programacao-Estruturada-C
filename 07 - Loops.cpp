#include <iostream>

using namespace std;

int main()
{
	for (int i=0;i<10;i++)	//Condi��o inciial, final do loop e contador.
	{
		cout << i << endl;
	}
	
	cout << "-----" << endl;
	
	int j = 0;
	
	while (j <= 10)	 //Condi��o do loop. Pode n�o entrar na rotina.
	{
		cout << j << endl;
		j++;
	}
	
	cout << "-----" << endl;
	
	int k = 0;
	
	do
	{
		cout << k << endl;
		k++;
	}
	while (k <= 10); //Condi��o do loop. Passa pelo menos uma vez na rotina.
}
