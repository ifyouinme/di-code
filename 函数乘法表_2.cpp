#include <iostream>
using namespace std;
void Multiplication_table_1()
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
void Multiplication_table_2()
{
	int y, x;
	for (x = 0; x <= 9; x++)
	{
		if (x == 0 )
			cout << "*" << "\t";
		else
			cout << x << "\t";
		for (y = 0; y <= x; y++)
		{
			if (x == 0)
				cout << y << "\t";
			else
				cout << x * y << "\t";
		}
		cout << endl;
	}
}
void Multiplication_table_3()
{
	int y, x;
	for (x = 0; x <= 9; x++)
	{
		if (x == 0)
			cout << "*" << "\t";
		else
			cout << x << "\t";
		for (y = 1; y <= 9; y++)
		{
			if (x == 0)
				cout << y << "\t";
			else if (y >= x)
				cout << x * y << "\t";
			else
				cout << " " << "\t";
		}
		cout << endl;
	}
}
int main()
{
	cout << "(Ò»)£º" << endl;
	Multiplication_table_1();
	cout << "(¶þ)£º" << endl;
	Multiplication_table_2();
	cout << "(Èý)£º" << endl;
	Multiplication_table_3();

}