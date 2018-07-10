#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[10]={33,44,55,66,77,88}; 

int main()
{
	int x=50,q=0;
	for(int i=5;i>=0;i--)
	{
		if(a[i]>x)a[i+1] = a[i];
		else
		{
			q = i + 1;
			break; 
		} 
	}
	a[q] = x;	
	for(int i=0;i<10;i++)printf("%d ",a[i]);
	return 0;
} 
