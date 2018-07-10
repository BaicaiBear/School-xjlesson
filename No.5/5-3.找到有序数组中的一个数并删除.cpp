#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[10]={33,44,55,66,77,88}; 

int main()
{
	int x=66,q=0;
	for(int i=0;i<6;i++)
		if(x==a[i])
		{
			q = i;
			break;
		}
	for(int i=q;i<5;i++)a[i] = a[i+1];
	a[6-1] = 0;
	for(int i=0;i<6;i++)printf("%d ",a[i]);
	return 0;
} 
