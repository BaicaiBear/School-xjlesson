#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

void st()
{
	string a;
	if(cin>>a)	//�������뷵��1��������󷵻�0��^Z�ı��������� 
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
