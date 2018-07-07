#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int n,max=0;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&n);
		if(n>max) max= n;
	}
	printf("%d",max);
	return 0;
}
