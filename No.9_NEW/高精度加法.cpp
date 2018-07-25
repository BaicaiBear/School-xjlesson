#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int a[1000],b[1000],c[1000];
int p;

int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}

int main()
{
	string st1,st2;
	cin >> st1;
	cin >> st2;
	int l1,l2,ln;
	l1 = st1.size();
	l2 = st2.length();
	for(int i=l1-1;i>=0;i--) a[i] = st1[l1-1-i]-'0';
	for(int i=l2-1;i>=0;i--) b[i] = st2[l2-1-i]-'0';
	
	ln = max(l1,l2);
	for(int i=0;i<ln;i++)
	{
		c[i] += a[i] + b[i];
		c[i+1] = c[i] / 10;
		c[i] = c[i] % 10;
	}
	if(c[ln]>0) printf("%d",c[ln]);
	for(int i=ln-1;i>=0;i--) printf("%d",c[i]);
	return 0;
}
