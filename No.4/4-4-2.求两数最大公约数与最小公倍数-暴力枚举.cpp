#include <cstdio>
#include <cstring>
#include <iostream>
#include <cstdlib>

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
	for(int i=b;i>0;i--)
	{
		if(a%i==0&&b%i==0)
		{
			c = i;
			printf("%d ",c);
			break;
		}
	}
	printf("%d",a*b/c);
	return 0;
}
