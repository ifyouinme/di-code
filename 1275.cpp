#include <iostream>
using namespace std;
void input(int *arr)
{
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
}
void process(int *arr)
{
    int big_subscript = 0;
    for (int i = 1; i < 10; i++)
    {
        big_subscript = arr[big_subscript] > arr[i] ? big_subscript : i;
    }
    if (big_subscript != 9)
    {
        int temp = arr[9];
        arr[9] = arr[big_subscript];
        arr[big_subscript] = temp;
    }
    int small_subscript = 0;
    for (int i = 1; i < 10; i++)
    {
        small_subscript = arr[small_subscript] < arr[i] ? small_subscript : i;
    }
    if (small_subscript != 0)
    {
        int temp = arr[0];
        arr[0] = arr[small_subscript];
        arr[small_subscript] = temp;
    }
}
void output(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[10];
    input(arr);
    process(arr);
    output(arr);
    return 0;
}