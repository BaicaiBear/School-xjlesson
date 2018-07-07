#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int x,y,z;
	char t;
	scanf("%d %c %d",&x,&t,&y);
	switch(t)
	{
		case '+': z = x + y;break;
		case '-': z = x - y;break;
		case '*': z = x * y;break;
		case '/': z = x / y;break;
		default: return 0; 
	}
	printf("%d",z);
	return 0;
} 
