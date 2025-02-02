#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;cin>>t;
	
	while(t--){
		long long x;cin>>x;
		if(x%2==1){
			cout<<1<<endl;
			continue;
		}
		else{
			int i=1;
			for(i=2;i<=x;i++){
				while(x%i==0 && i<=x){
					i++;
					}
					break;
				}
				cout<<i-1<<endl;
		}
	}
}
