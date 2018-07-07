#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int n=0; 
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<=i;j++)
		{
			n++;
			printf("%d ",n);
		}
		printf("\n");
	}
	return 0;
}
