#include <iostream>

using namespace std;

void print_age(int age);

int main()
{
	int age;
	
	cout << "Enter your age: \n";
	cin >> age;
	
	print_age(age);  //Função não retorna um valor.
}

void print_age(int age)  //Retorno da função do tipo void.
{
	cout << "Your age: " << age;
}
