#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int K;
   double Sn,n;
   cin>>K;
   for(n = 1;;n++)
   {
       Sn += 1/n;
       if(Sn > K)
       {
           cout << n;
           break;
       }
   }
   return 0;
}

