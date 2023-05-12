#include <stdio.h>
int f(int n){
	int t=0;
	int s=0;
	if(n>9999||n<1){
		return 0;
	}else{
		while(n>=1){
			s=n%10;
			t=t*10+s;
			n/=10;
		}
	}
	return t;
}
int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",f(a));
	return 0;

}
