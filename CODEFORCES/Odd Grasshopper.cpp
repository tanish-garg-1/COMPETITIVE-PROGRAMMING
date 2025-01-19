#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long x,n;
		cin>>x>>n;
		if(x%2==0){
			if(n%4==0) cout<<x;
			else if(n%4==1) cout<<x-n;
			else if(n%4==2) cout<<x+1;
			else if(n%4==3) cout<<x+n+1;
		}
		else{
			if(n%4==0) cout<<x;
			else if(n%4==1) cout<<x+n;
			else if(n%4==2) cout<<x-1;
			else if(n%4==3) cout<<x-n-1;
		}
		cout<<endl;
	}
}
