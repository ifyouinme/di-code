#include <iostream>
using namespace std;

void reverse_arr(int *arr, int size);

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}, size = 6;
    cout << "交换前：" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse_arr(arr, size);
    cout << "交换后：" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
void reverse_arr(int *arr, int size)
{

    int temp;
    int left = 0, right = 5; //左右双指针
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        left++;
        right--;
    }
}