#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	for(int i=1;i<=9;i++)
	{
		//printf("%d:",i);
		for(int j=i;j<=9;j++)
		{
			printf("%1d*%1d=%2d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
