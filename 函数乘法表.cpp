#include <iostream>
using namespace std;
void Multiplication_table()
{
	int y, x;
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x == 0 && y == 0)
				cout << "*" << "\t";
			else if (x == 0)
				cout << y << "\t";
			else if (y == 0)
				cout << x << "\t";
			else
				cout << x * y << "\t";
		}
		cout << endl;
	}
}
int main()
{
	Multiplication_table();
}