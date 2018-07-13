#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

void ttt(int n)
{
	if(!n)/*优化自n==0*/ return;
	ttt(n>>1);
	cout << (n&1)/*优化自n%2(注意优先级，加括号)*/;
	return;
}

int main()
{
	int n;
	cin >> n;
	ttt(n);
	return 0;
}
