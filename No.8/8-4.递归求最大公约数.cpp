#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int gcd(int a,int b)
{
	int d;
	/*if(b==0) return a;
	d = gcd(b,a%b);
	return d;
	*/
	return (b==0)?a:gcd(b,a%b);
}

int main()
{
	int y;
	y = gcd(12,8);
	cout << y;
	return 0;
}
