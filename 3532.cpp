#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	for (x=0;x<=100;x++)
		for(y=0;y<=100;y++)
			for (z = 0; z <= 100; z++)
			{
				if (5 * x + 3 * y + z / 3 == 100 && x + y + z == 100 && z % 3 == 0)//�ж������Ƿ����㣬С�������Ƿ�Ϊ3�ı���
				{
 
					cout << x << " " << y << " " << z << endl;
				}
				
			}
}