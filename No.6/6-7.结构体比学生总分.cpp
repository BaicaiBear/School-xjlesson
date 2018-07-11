#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

struct st{
	int ch,ma;
	//s = ch + ma;
	int s()
	{
		return ch + ma;
	}
};

struct st a,b;

int main()
{
	scanf("%d%d",&a.ch,&a.ma);
	scanf("%d%d",&b.ch,&b.ma);
	//a.s = a.ch + a.ma;
	//b.s = b.ch + b.ma;
	if(a.s()>b.s())printf("A:%d %d %d",a.ch,a.ma,a.s());
	else printf("B:%d %d %d",b.ch,b.ma,b.s());
	return 0;
}
