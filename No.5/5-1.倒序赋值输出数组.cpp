#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int a[5]={1,3,9,7,6},b[5];
	for(int i=0;i<5;i++) b[i] = a[4-i];
	for(int i=0;i<5;i++)printf("%d ",b[i]);
	return 0;
}
