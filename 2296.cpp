#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;

	if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
	{
		cout << "yes" << "\n";
	}
	else if (x + y > z && x + z > y && z + y > x)
	{
		cout << "no" << "\n";
	}
	else
	{
		cout << "not a triangle" << "\n";
	}
}