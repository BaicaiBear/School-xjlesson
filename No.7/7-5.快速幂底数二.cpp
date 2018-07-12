#include <cstdio>
#include <cstring>
#include <iostream>
#include <string> 
#include <cmath>

#define P 10007

using namespace std;

int pox(int x)
{
	int s=1,t=2;
	while(x>0)
	{
		if(x&1)/*优化自x%2==1*/ s = s * t % P;
		t = t * t % P;
		x = x >> 1; /*优化自x/=2*/ 
	} 
	return s%P; 
} 

int main()
{
	int n;
	scanf("%d",&n);
	int y = pox(n); 
	printf("%d",y);
	return 0; 
} 
