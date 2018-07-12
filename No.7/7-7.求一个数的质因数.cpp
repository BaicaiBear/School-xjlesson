#include <cstdio> 
#include <cstring>
#include <iostream>
#include <string> 
#include <cmath>

using namespace std;

int main()
{
	int x,i;
	scanf("%d",&x);
	for(i=2;i<=x;i++)
	{
		while(x%i==0)
		{
			x /= i;
			printf("%d ",i);
		}
	}
	return 0;
}
