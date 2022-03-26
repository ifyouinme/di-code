#include<iostream>
using namespace std;
bool isprime(int m)
{
	int i;
	for (i = 2; i <= m / 2; ++i)//ËØÊýÌõ¼þÅÐ¶Ï
	{
		if (m % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
int main()
{
	int m = 0;
	cin >> m;
	if (isprime(m) == 0)
	{
		cout << "False" << endl;
	}
	else cout << "True" << endl;
	
	return 0;
}

