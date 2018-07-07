#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int x,y,a,b,c;
	scanf("%d",&x);
	a = x / 100;
	c = x % 10;
	b = (x - a * 100 - c) / 10;
	y = c * 100 + b * 10 + a;
	printf("%d",y);
	return 0;
}
