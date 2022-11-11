#include <stdio.h>
int main()
{
	int a,k;
	scanf("%d",&a);
	int i=1;
	while( i<=a){
		int space=a-i;
		int star=i;
        i++;
        k=0;
		while(k<space){
		    printf(" ",space);
			k++;
		}
        k=0;
		while(k<star){
		    printf("*",star);
			k++;
		}
		printf("\n");
	}
}

