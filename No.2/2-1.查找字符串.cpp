#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

string st,su;

int main()
{
	int x,y;
	st = "stuendent";
	su = "en";
	x = st.find(su,4);
	y = st.find("tt",0);
	printf("%d %d",x,y);
	return 0;
}
