#include<cstdio>
#include <cstring>
#include <iostream>

int main()
{
	int s=0;
	for(int i=0;i<100;i+=3) if(i%4!=0)s += i;
	printf("%d",s);
	return 0; 
} 
