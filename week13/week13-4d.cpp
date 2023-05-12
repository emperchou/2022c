#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n%m!=0) printf("%d",n/m+1);
	else if(n%m==0)printf("%d",n/m);
}
