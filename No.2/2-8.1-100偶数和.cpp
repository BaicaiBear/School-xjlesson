#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int a,s;
	for(int i=1;i<=50;i++)
	{
		a = 2 * i;
		s += a;
	}
	printf("%d",s);
	return 0;
}
