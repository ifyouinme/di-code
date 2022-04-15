#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    double sum_1=0, sum_2=0, sum_3=0,i;
    cin >> a >> b >> c;
    for (i = 1; i <= a; i++)
    {
        sum_1 += i;
    }
    for (i = 1; i <= b; i++)
    {
        sum_2 += i * i;
    }
    for (i = 1; i <= c; i++)
    {
        sum_3 += 1 / i;
    }
    
    cout << fixed << setprecision(2) << (sum_1 + sum_2 + sum_3);
    return 0
}