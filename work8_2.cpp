#include <iostream>
using namespace std;

void fun(int x, int &y, int *z)
{
    int t;
    t = x;//t=2，x=2
    x = y;//x=4,y=4
    y = t;//y=2,t=2
    x = x * x;//x=16
    y = y * y;//y=4
    *z = x + y;//z=20
}

int main()
{
    int x, y, z;
    x = 2;
    y = 4;
    z = 0;
    fun(x, y, &z);//实参x，y传入都为变量，而z传入的是地址，故z的值可以在函数改变，x，y不行
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    return 0;
}