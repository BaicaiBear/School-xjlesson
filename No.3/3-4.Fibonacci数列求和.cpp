#include<cstdio>
#include <cstring>
#include <iostream>

int main()
{
	int a1=1,a2=1,a3=2,s=2;
	for(int i=0;i<20;i++)
	{
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
		s += a3;
		//printf("%d %d\n",a3,s);
	}
	printf("%d",s);
	return 0;
}
