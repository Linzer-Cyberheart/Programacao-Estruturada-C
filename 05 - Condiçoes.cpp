#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Type your age: " << endl;
	cin >> age;
	
	if (age >= 21) //Condi��o
	{
		cout << "Of age." << endl;
	}
	else
	{
		cout << "Minor." << endl;
	}
	
}
