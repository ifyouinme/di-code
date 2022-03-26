#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	double init_hign;
	cin >> init_hign >> n;
	double distance = init_hign, last_hign = init_hign;
	for (int i = 1; i < n; i++)
	{
		last_hign /= 2;
		distance += last_hign * 2;
	}
	cout << setprecision(1) << distance << " " << last_hign / 2;
}