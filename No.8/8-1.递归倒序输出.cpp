#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

void prn()
{
	int x;
	cin >> x;
	if(x!=0)
	{
		prn();
	 	cout << x << ' ';
	} 
	return;
}

int main()
{
	prn();
	return 0;	
}
