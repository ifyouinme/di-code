#include<iostream>
 #include<iomanip>
using namespace std;
void display(double x)
{
	cout << "A double:" << x << endl;
}
void display(int x)
{
	cout << "A int:" << x << endl;
}
void display(char x)
{
	cout << "A char:" << x << endl;
}
int main()
{
	double x = 1.23;
	display(x);
	float z = 1.32;
	display(z);
	int y = 1;
	display(y);
	char i = 'i';
	display(i);
	short k = 132;
	display(k);
	return 0;
}