#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int a=0,s;
	for(int i=0;i<5;i++)
	{
		a = a * 10 + 2;
		s += a;
	}
	printf("%d",s);
	return 0;
}
