#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

void ttt(int n)
{
	if(!n)/*�Ż���n==0*/ return;
	ttt(n>>1);
	cout << (n&1)/*�Ż���n%2(ע�����ȼ���������)*/;
	return;
}

int main()
{
	int n;
	cin >> n;
	ttt(n);
	return 0;
}
