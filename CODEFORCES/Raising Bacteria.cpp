#include<iostream>
using namespace std;
int main(){
	int x;cin>>x;
	int ans=0;
	while(x){
		if(x%2==1) ans++;
		x=x>>1;
	}
	cout<<ans;
}
