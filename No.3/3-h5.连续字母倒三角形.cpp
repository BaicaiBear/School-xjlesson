#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	for(int i=65;i<=68;i++)
	{
		for(int j=68;j>=i;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}
