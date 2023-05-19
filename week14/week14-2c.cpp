#include <stdio.h>
int main()
{
	int a[1000];
	int min=99999,t=0;
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
		if(min>a[i]){
			min=a[i];
			t=i;
		}
	}
	printf("%d %d\n",t,4320/min);
}
