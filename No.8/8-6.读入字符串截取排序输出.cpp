#include <cstring>
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

string a,b[10];

bool com(string x,string y)	//µ¹Ðò 
{
	return x>y;
}

int main()
{
	cin >> a;
	int y = a.length();
	for(int i=0;i<y;i++)
	{
		b[i] = a.substr(i);
	}
	sort(b,b+y/*,com£¨µ¹Ðò£©*/);	//°´×ÖÄ¸±íÅÅÐò 
	for(int i=0;i<y;i++) cout<<b[i]<<endl;
	return 0;
} 
