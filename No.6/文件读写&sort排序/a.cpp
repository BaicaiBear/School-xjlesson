#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int a[15];

bool com(int x,int y)
{
	return x>y;//���� 
}

int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	
	for(int i=0;i<10;i++)scanf("%d",&a[i]);
	sort(a/*��ʼ�㣨a+�±꣩*/,a+10/*�����㣨a+�������±�+1��*/,com/*�����Լ�д���������򲻹���*/);
	for(int i=0;i<10;i++)printf("%d ",a[i]);
	return 0;
}
