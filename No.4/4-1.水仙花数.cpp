#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	for(int a=1;a<10;a++)
	{
		for(int b=0;b<10;b++)
		{
			for(int c=0;c<10;c++)
			{
				if(100*a+10*b+c==a*a*a+b*b*b+c*c*c)printf("%d ",100*a+10*b+c);
			}
		}
	}
	return 0;
}
