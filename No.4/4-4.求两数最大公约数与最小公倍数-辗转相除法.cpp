#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		c = a;
		a = b;
		b = c;
	}
	int d=a,e=b; 
	while(true)
	{
		c = a % b;
		if(c==0)break;
		a = b;
		b = c;
	}
	printf("%d ",b);
	printf("%d",e*d/b);
	return 0;
}
