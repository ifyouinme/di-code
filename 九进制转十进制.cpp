#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 2022;
    int n = num / 1000;
    int u = num / 100 % 10;
    int m = (num /10) % 10; 
    int a = (num % 1000) % 10;
    
    int ten = n * pow(9,3) + u * pow(9,2) + m * pow(9,1) + a * pow(9,0);
    cout << ten << endl;
    return 0;
}