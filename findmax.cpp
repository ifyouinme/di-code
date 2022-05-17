#include <iostream>
using namespace std;

int *findmax(int *arryay, int size, int *index)
{
    int flag = 0;
    for (int i = 1; i < size; i++)
    {
       if(arryay[i]>arryay[flag])
        {
            flag= i;
        }
    }
    *index = flag;
    return arryay + flag;
}

int main()
{
    int a[10] = {33, 91, 54, 67, 82, 37, 85, 63, 19, 68};
    int *maxaddr;
    int idx;

    maxaddr = findmax(a, sizeof(a) / sizeof(*a), &idx);

    cout << "the index of maximum element is " << idx << endl
         << "the address of it is" << maxaddr << endl
         << "the value of it is" << a[idx] << endl;
}