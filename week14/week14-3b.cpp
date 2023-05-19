#include <stdio.h>
int b[100];
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(int i=a;i>=0;i--){
		if(b[i]%2!=0){
			printf("%d ",b[i]);
		}
	}
}
