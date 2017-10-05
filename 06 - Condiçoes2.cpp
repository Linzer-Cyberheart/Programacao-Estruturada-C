#include <iostream>

using namespace std;

int main()
{
	int option;
	
	cout << "Choose an option (1, 2, 3): " << endl;
	cin >> option;
	
	switch (option)
	{
		case 1:
			cout << "Option 1 selected.";
			break;
		
		case 2:
			cout << "Option 2 selected.";
			break;
		
		case 3:
			cout << "Option 3 selected.";
			break;
		
		default:
			cout << "None selected.";
			break;
	}
	
}
