#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int x;
	char y;
	scanf("%d",&x);
	if(100>=x&&x>90)y = 'A';
	else if(90>=x&&x>80)y = 'A';
	else y = 'C';
	printf("%c",y);
	return 0;
}
