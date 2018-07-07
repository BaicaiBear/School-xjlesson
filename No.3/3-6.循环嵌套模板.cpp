#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	for(int t=1;t<=3;t++)
      {
	  	for(int i=0;i<=9;i++)
	      {
	 		for(int j=0;j<=9;j++)
	 	      {
	 	  	  	printf("%d%d%d  ",t,i,j);
	 	  	  }
	 		printf("\n");
	  	  }
      }
	return 0;
}
