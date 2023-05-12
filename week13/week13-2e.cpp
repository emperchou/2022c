#include <stdio.h>
int main()
{
	int a[20],i,b,c=0;
	for(int i=0;i<=10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0)break;
	}
	scanf("%d",&b);
	for(int i=0;i<=10;i++){
		if(a[i]==b)c++;
	}
	printf("%d\n",c);
}
