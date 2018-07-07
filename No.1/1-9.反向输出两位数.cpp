#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int x,y,a,b;
	scanf("%d",&x);
	a = x % 10;
	b = x / 10;
	y =  a * 10 + b;
	printf("%d",y);
	return 0;
}
