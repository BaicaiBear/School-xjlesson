#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int a[15],n;
struct student
{
	int ch,ma;
};//�����ٷֺ� 
student st[10];

/*��һ�ֶ��巽�� 
struct student st[10]; 
*/ 

bool com(student x,student y)
{
	return x.ma>y.ma||(x.ma==y.ma&&x.ch>y.ch);//���򷽷� 
}

int main()
{
	freopen("st.in","r",stdin);
	freopen("st.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d%d",&st[i].ch,&st[i].ma);
	sort(st,st+n,com);
	for(int i=0;i<n;i++)printf("%d %d\n",st[i].ma,st[i].ch);
	return 0;
}
