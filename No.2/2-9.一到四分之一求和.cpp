#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	double a,s=0;
	for(int i=1;i<=4;i++)
	{
		a = (double)1/i;
		s += a;
	}
	printf("%lf",s);
	return 0;
}
