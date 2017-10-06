#include <iostream>

using namespace std;

//Protótipo das funções.

double addition(double x, double y);        
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);

int main()
{
	double x, y;
	
	cout << "\nEnter the values for addition: \n";
	cin >> x >> y;
	cout << addition(x, y);  //Chamando uma função.
	
	cout << "\nEnter the values for subtraction: \n";
	cin >> x >> y;
	cout << subtraction(x, y); 
		
	cout << "\nEnter the values for multiplication: \n";
	cin >> x >> y;
	cout << multiplication(x, y); 
		
	cout << "\nEnter the values for division: \n";
	cin >> x >> y;
	cout << division(x, y);  
}

//As quatro funções da calculadora.

double addition(double x, double y)  
{
	double result = x + y;
	return result;
}

double subtraction(double x, double y)
{
	double result = x - y;
	return result;
}

double multiplication(double x, double y)
{
	double result = x * y;
	return result;
}

double division(double x, double y)
{
	double result = x / y;
	return result;
}
