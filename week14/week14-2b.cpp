#include<iostream>
using namespace std;
int GCD(int a, int b){
	for(int i=a-1;i>0;i--){
		if(a%i==0){
			if(b%i==0) return i;
		}
	}
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
