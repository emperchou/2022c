#include <stdio.h>
#include <stdlib.h>
int a[10] = {9,5,3,2,6,7,8,4,1,0};
int compare(const void *p1,const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
