#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int a[15];

bool com(int x,int y)
{
	return x>y;//倒序 
}

int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	
	for(int i=0;i<10;i++)scanf("%d",&a[i]);
	sort(a/*起始点（a+下标）*/,a+10/*结束点（a+结束点下标+1）*/,com/*倒叙自己写函数，正序不管他*/);
	for(int i=0;i<10;i++)printf("%d ",a[i]);
	return 0;
}
