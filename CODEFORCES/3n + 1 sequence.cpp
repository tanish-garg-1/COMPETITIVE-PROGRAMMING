#include<iostream>
using namespace std;
int function(int n,int ans){
	if(n==1) return ans;
	if(n%2==1) function(3*n+1,ans+1);
	else if(n%2==0) function(n/2,ans+1);
}
int main(){
	int n;cin>>n;
	cout<<function(n,1);
}
