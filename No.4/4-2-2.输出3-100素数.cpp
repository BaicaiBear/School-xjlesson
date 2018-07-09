#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int f;
	for(int x=3;x<=100;x++)
	{
		f = 0;
		for(int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)f++;
			if(f!=0)break;
		}
		if(f==0)printf("%d ",x);
	}
}
