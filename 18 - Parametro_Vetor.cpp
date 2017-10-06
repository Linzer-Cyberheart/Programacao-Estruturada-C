#include <iostream>
#include <string.h>

using namespace std;

//Passando um vetor como parâmetro devemos colocar o sinal ( * ).

void print_vector(int *values);

int main()
{
	int values[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	print_vector(values);
}

//Alterar o vetor dentro da função, modifica o valor que foi passado como parâmetro.

void print_vector(int *values) 
{
	for (int i=0;i<=9;i++)
	{
		cout << "Values[" << i << "] :" << values[i] << endl;
	}
}
