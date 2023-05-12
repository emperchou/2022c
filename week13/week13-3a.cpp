#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	a=a/1000;
	int ans = a%10;
	printf("%d",ans);
}

