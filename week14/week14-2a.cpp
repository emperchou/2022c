#include <stdio.h>
int main()
{
	int a,b=0,c=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		b=i*11;
		c+=b;
	}
	printf("%d",c);
}
