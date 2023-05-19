#include <stdio.h>
int main()
{
	int n,a=0,b=0,c=0;
	scanf("%d",&n);
	a=n/3600;
	if(a<10)printf("0%d:",a);
	else printf("%d:",a);
	b=(n%3600)/60;
	if(b<10)printf("0%d:",b);
	else printf("%d:",b);
	c=((n%3600)%60)%60;
	if(c<10)printf("0%d",c);
	else printf("%d",c);


}
