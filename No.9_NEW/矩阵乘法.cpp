#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <string>

using namespace std;

int x[4],y[12][4],s[12][5],f;

int main()
{
	//freopen("juzhen.in","r",stdin);
	//freopen("juzhen.out","w",stdout);
	for(int i=0;i<4;i++)
		cin>>x[i];
	for(int i=0;i<12;i++)
		for(int j=0;j<4;j++)
			cin>>y[i][j];
	for(int j=0;j<12;j++)
	{
		for(int i=0;i<4;i++)
		{
			f += x[i] * y[j][i];
		}
		cout<<f<<endl;
		f = 0;
	}
	return 0;
}
