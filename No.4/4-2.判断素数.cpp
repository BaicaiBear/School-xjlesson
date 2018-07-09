#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x,f=0;
	scanf("%d",&x); 
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)f++;
		if(f!=0){
			printf("no");
			break;
		}
	}
	if(f==0)printf("yes");
	return 0;
}
