#include <stdio.h>
int main()
{
	int n,t=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			t=t+i;
		}
	}
	printf("%d",t);
}
