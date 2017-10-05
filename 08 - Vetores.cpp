#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int k[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //Criando e inicializando um vetor.
	
	for (int i=9;i>=0;i--)
	{
		k[i] = i;  //Atribuindo um valor na posição.
		cout << k[i] << endl;
	}
	
	char name1[10] = "Linzer"; //Uma String. 
	char name2[10] = "Raissa";
	
	strcat(name1, " Lhezier"); //Concatena duas strings.
	
	cout << "\nName1, Name2: " << name1 << ", " << name2 << endl;
	
	cout << "\nLength of Name1: " << strlen(name1) << endl; //Tamanho de uma string.
	cout << "Length of Name2: " << strlen(name2) << endl;
	
	cout << "\nComparing: " << strcmp(name1, name2) << endl; //Compara duas strings.
	
	char user[100];
	gets(user); //String do teclado.
	cout << "\nUser: " << user << endl;
	
}
