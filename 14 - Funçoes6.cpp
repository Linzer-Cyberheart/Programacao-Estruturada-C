#include <iostream>

using namespace std;

const double DOLLAR_VALUE = 2.7;

void convert_real_dollar(double real);

int main()
{
	double real_value;
	
	cout << "Value in real: " << endl;
	cin >> real_value;
	
	convert_real_dollar(real_value);
}

void convert_real_dollar(double real)
{
	if (real < 0)
	{
		cout << "The value can not be less than 0." << endl;
	}
	
	cout << "Converted Value: " << real * DOLLAR_VALUE << endl;
}
