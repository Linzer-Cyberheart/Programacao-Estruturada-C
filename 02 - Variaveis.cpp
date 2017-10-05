#include <iostream>

using namespace std;

int main()
{
	const float number_pi = 3.14;
	char gender = 'M';
	int age = 31;
	float tax_receipt = 8.5; 
	double salary = 1200.12;
	
	cout << "Variables: " << gender << 
					" , " << age <<
					" , " << tax_receipt <<
					" , " << salary <<
					" , " << number_pi << endl;
	
	double grade1, grade2;
	cout << "Type your grades: " << endl;
	cin >> grade1 >> grade2;
	cout << "Grades: " << grade1 << " - " << grade2;
	
}
