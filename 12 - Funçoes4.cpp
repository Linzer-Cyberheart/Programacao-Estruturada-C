#include <iostream>

using namespace std;

void print();

int main()
{
	print();
}

void print()
{
	char value[10];
	
	cout << "Enter something: \n";
	gets(value);
	
	cout << value;
}
