#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double a,b,c;
	double s,p;
	scanf("%lf%lf%lf",&a,&b,&c);
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c)); 
	printf("%.2lf",s);
	return 0;
} 
