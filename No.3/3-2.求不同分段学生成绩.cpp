#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int a=0,b=0,c=0;
	for(int i=0;i<5;i++)
	{
		int x=0;
		scanf("%d",&x);
		if(x>=85)a++;
			else if(x>=70)b++;
				else c++;		
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
