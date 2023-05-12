#include <stdio.h>
int main()
{
	int n,t=0,p=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		t=i*i;
		p=p+t;
	}
	printf("%d",p);
}
