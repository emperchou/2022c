#include <stdio.h>
int main()
{
	long long int a;
	int t=0;
	int b[1000];
	scanf("%lld",&a);
	for(int i=0;i<10000;i++){
		if(a!=0){
			b[i]=a%1000;
			a=a/1000;
			t=i;
		}
	}
	for(int i=t;i>=0;i--){
		printf("%d",b[i]);
		if(i!=0)printf(",");
	}
}
