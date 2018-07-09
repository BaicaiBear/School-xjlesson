#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int a[10],s=0;
	for(int i=0;i<10;i++) scanf("%d",&a[i]);
	for(int i=0;i<10;i++) s += a[i];
	printf("%d",s);
	return 0; 
} 
