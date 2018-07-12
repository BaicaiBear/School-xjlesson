#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[10];

void init()
{
	for(int i=0;i<10;i++) scanf("%d",&a[i]);
}

void prnt()
{
	for(int i=0;i<10;i++) printf("%d ",a[i]);
}

int main()
{
	init();
	prnt();
	return 0;
}
