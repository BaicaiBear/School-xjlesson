#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int a[5],max=-0x3f3f3f3f,mi=0;
	for(int i=0;i<5;i++)scanf("%d",&a[i]);
	for(int i=0;i<5;i++)
		if(a[i]>max)
		{
			max = a[i];
			mi = i; 
	    } 
	printf("%d %d",max,mi);
	return 0; 
}
