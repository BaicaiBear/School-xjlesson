#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	for(int x=1;x<=1000;x++)
	{
		int s=0;
		for(int a=1;a<x;a++)
		{
			if(x%a==0)s+=a;
		}
		if(s==x)printf("%d ",x);
	}
	return 0;
}
