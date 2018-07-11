#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[3][4],b[4][3];

int main()
{
	int k=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			k++;
			a[i][j] = k;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%2d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
