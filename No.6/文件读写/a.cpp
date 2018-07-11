#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[15];

int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	
	for(int i=0;i<10;i++)scanf("%d",&a[i]);
	for(int i=0;i<10;i++)printf("%d ",a[i]);
	return 0;
}
