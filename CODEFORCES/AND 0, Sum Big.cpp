#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		long long b=1e9+7;
		long long ans=1;
		while(k--){
			ans=(ans*n)%b;
		}
	cout<<ans<<endl;
	}
}
