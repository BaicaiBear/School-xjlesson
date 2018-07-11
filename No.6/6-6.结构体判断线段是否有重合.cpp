#include <cstdio>

using namespace std;

struct line{
	int x,y;
};

struct line ln,lm;

int main()
{
	scanf("%d%d",&ln.x,&ln.y);
	scanf("%d%d",&lm.x,&lm.y);
	if(ln.y<lm.x||lm.y<ln.x)printf("No");
	else printf("Yes");
	return 0;
}
