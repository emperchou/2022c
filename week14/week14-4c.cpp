#include <stdio.h>
int f(int n)
{
	int a,ans=0;
	for(int i=0;i<=a;i++){
		ans = ans+(i*2+1);
	}
	return ans;

}
int main()
{
	int n;
	scanf("%d",&n);
	printf("f(%d)=%d",n,f(n));
}
