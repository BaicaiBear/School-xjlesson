#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int t,a[5]={3,5,9,12,10};
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]<a[j])//�ɴ�С 
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(int i=0;i<5;i++)printf("%d ",a[i]);
	return 0;
}
