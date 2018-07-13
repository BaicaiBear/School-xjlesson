#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

void st()
{
	string a;
	if(cin>>a)	//正常读入返回1，读入错误返回0（^Z文本结束符） 
	{
		st();
		cout<<a<<' ';
	}
	return;
}

int main()
{
	st();
	return 0;
}
