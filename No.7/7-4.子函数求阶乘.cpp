#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int fac(int n)
{
	int s = 1; 
	for(int i=1;i<=n;i++)
		s *= i;
	return s; 
} 

int main()
{
	printf("%d",fac(4)+fac(7)+fac(10));	//Çó4,7,10µÄ½×³ËºÍ 
	return 0; 
} 
