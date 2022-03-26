#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	while (1)
	{
		cin >> x;
		if (2 < x and x <= 10)
		{
			y = x * (x + 2);
			cout << y << endl;
			break;
		}
		else if (-1 < x and x <= 2)
		{
			y = 2 * x;
			cout << y << endl;
			break;
		}
		else if (x <= -1)
		{
			y = x - 1;
			cout << y << endl;
			break;
		}
		else
		{
			cout << "请输入小于11的整数" << "\n";
			continue;
		}
	}
}