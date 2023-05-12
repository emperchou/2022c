#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>1&&b>1) printf("1");
	if(a<1&&b>1) printf("2");
	if(a<1&&b<1) printf("3");
	if(a>1&&b<1) printf("4");
	printf("\n");
}
