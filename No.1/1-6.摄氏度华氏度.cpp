#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	double f,c;
	scanf("%lf",&f);
	c = (f - 32) * 5 / 9;
	printf("%.2lf",c);
	return 0;
}

