#include <iostream>
using namespace std;

int vals[10];
int error = -1;

int &put(int n)
{

    if (n < 0 || n >= 10)
    {
        cout << "range error in put() value!";
        return error;
    }
    return vals[n];
}
int get(int n)
{
    return vals[n];
}

int main()
{
    put(0) = 10;
    put(1) = 20;
    put(9) = 30;
    cout << get(0) << endl;
    cout << get(1) << endl;
    cout << get(9) << endl;
    put(12) = 1;
}