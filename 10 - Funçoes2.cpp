#include <iostream>

using namespace std;

int even_or_odd(int number);

int main()
{
	int number, result;
	
	cout << "Type a number: \n";
	cin >> number; 
	result = even_or_odd(number);  //Retorno da Fun��o na vari�vel "result".
	
	if (result == 0)
	{
		cout << "Even.";
	}
	else
	{
		cout << "Odd.";
	}
}

int even_or_odd(int number)
{
	int value = number % 2;
	return value;  //Retorno da Fun��o.
}
