#include <stdio.h>
#include <algorithm>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	std::sort(a,a+10);
	for(int i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}
