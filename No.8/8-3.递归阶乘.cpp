#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int fac(int a)
{
	int s;
	if(a==1||a==0)return 1;
	s = fac(a-1) * a;
	return s;
} 

int main()
{
	int n;
	cin >> n;
	cout << fac(n);
	return 0;
}
