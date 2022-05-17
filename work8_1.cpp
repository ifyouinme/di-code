#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &ref = a;//声明ref引用初始化为a，与之关联
    ref += 5;//完成初始化后，ref与a皆表示a
    cout << "a=" << a << ","
         << "ref=" << ref << endl;
    a *= 10;
    cout << "a=" << a
         << ","
         << "ref=" << ref << endl;
    return 0;
}