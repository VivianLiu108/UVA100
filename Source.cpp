#include<iostream>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a << ' ' << b << ' ';
		int time1 = 0;
		for (int i = a; i <= b; i++)
		{
			int j = i;
			int times = 1;
			while (j != 1)
			{
				if (j % 2 == 1)
				{
					j = j * 3 + 1;
					times++;
				}
				if (j % 2 == 0)
				{
					j /= 2;
					times++;
				}
			}
			
			if(times>time1)
				time1 = times;
		}
		cout << time1 << endl;
	}
}