#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[100];

int main()
{
	int i;
	scanf("%d",&i);
	//memset(a,0,sizeof(a));(全局变量自动清零) 
	a[1] = a[2] = 1;
	printf("1\n1 1\n"); 
	for(int k=3;k<=i;k++)
	{
		a[k] = 1;
		for(int j=k-1;j>=2;j--)a[j] = a[j-1] + a[j];
		for(int j=1;j<=k;j++)printf("%d ",a[j]);
		printf("\n");
	}
	return 0;
} 
