#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int a[1000],b[1000],c[5000];

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
	
	for(int i=0;i<l2;i++)
		for(int j=0;j<l1;j++)
		{
			c[i+j] += b[i] * a[j];
			c[i+j+1] += c[i+j] / 10;
			c[i+j] = c[i+j] % 10;
		} 	
	if(c[l2+l1-1]!=0)cout<<c[l2+l1-1]; 
	for(int i=l2+l1-2;i>=0;i--) cout<<c[i];
	return 0;
}
