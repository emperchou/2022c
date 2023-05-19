#include <stdio.h>
int main()
{
	int k,N=0,ans=0;
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		ans=ans+i;
		N++;
		if(ans>k)break;
	}
	if(ans>k)printf("%d",N);
}
