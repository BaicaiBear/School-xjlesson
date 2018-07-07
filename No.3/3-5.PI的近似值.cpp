#include<cstdio>
#include <cstring>
#include <iostream>

int main()
{
	double pi,a,s=0;
	for(int i=1;;i++)
	{
		a = 1.0 / (4.0*(double)i-3.0) - 1.0 / (4.0*(double)i-1.0);
		//printf("%lf\n",a);
		s = s + a; 
		if(a<1e-4)break;
	}
	printf("%lf",4.0*s);
	return 0;
}
