#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int a1[10] = {9,8,7,1,3,2,4,6,5,0};
    vector<int>a2(a1,a1+10);
    for(int i=0;i<10;i++){
        printf("%d ",a2[i]);
    }
}
