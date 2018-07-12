#include <cstdio>
#include <cstring>
#include <iostream>
#include <string> 
#include <cmath>

using namespace std;

int a[10000];

void bre(int n)
{
	int f;
	for(int i=0;n/*ÓÅ»¯×Ôn>0*/;i++)
	{
		if(n&1) a[i] = 1;
		else a[i] = 0;
		n = n >> 1; 
		f = i;
	}
	for(int i=f;i>=0;i--) printf("%d",a[i]);
}

int main()
{
	int n;
	scanf("%d",&n);
	bre(n);
	return 0;
} 
