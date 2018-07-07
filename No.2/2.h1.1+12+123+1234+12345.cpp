#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int a,s=0;
	for(int i=0;i<5;i++)
	{
		a = a * 10 + i + 1;
		s += a;
	}
	printf("%d",s);
	return 0;
}
