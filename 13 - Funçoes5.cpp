#include <iostream>

using namespace std;

int square(int x);

int main()
{
	int x;
	
	cout << "Enter a number: \n";
	cin >> x;
	
	cout << x << " squared is " << square(x);
}

int square(int x)
{
	return x * x;
}


