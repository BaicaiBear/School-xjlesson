#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;


int main()
{
	int a[5];
	memset(a,0,sizeof(a)); 
	int x=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&x);
		a[x]++;
	}
	for(int i=1;i<5;i++)printf("%d ",a[i]);
	return 0;
}
