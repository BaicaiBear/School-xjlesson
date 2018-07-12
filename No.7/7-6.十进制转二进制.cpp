#include <cstdio>
#include <cstring>
#include <iostream>
#include <string> 
#include <cmath>

using namespace std;

int a[10000];

void bre(int n)
{
	int f,i;
	for(i=0;n/*优化自n>0*/;i++)
	{
		if(n&1)/*优化自x%2==1*/ a[i] = 1;
		else a[i] = 0;
		n = n >> 1; 
	}
	f = i-1;
	for(int i=f;i>=0;i--) printf("%d",a[i]);
}

int main()
{
	int n;
	scanf("%d",&n);
	bre(n);
	return 0;
} 
