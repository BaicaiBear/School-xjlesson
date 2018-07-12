#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

double area(double a,double b,double c)
{
	double p = (a+b+c) / 2.0;
	double s = sqrt(p*(p-a)*(p-b)*(p-c));
	//printf("%lf ",s);
	return s;
}

int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	double s = area(a,b,c) + area(c,d,e);
	printf("%.2lf",s);
	return 0;
}
