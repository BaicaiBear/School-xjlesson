#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=65;j<=i+65;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}
