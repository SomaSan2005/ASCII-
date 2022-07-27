#include <iostream>

using namespace std;

int main()
{

	int i;
	char x;

	cout << " **** CODICE ASCII ESTESO (8 bit) ***  \n\n";

	for (i = 0; i <= 255; i++)
	{

		cout << "numero: " << i;
		x = i;

		cout << " Carattere: " << x << " \n ";
	}
	return 0;
}
