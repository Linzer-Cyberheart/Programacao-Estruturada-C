#include <iostream>
#include <string.h>

using namespace std;

//Passando uma string como parâmetro devemos colocar o sinal ( * ).

int validate_password(char *password);  

int main()
{
	char password[10];
	
	cout << "Enter a password: " << endl;
	gets(password);
	
	validate_password(password);
	
}

int validate_password(char *password)
{
	if (strcmp(password, "pass123") == 0)
	{
		cout << "Loged in.";
		return 0;
	}
	else
	{
		cout << "Invalid password.";
		return 1;
	}
}
