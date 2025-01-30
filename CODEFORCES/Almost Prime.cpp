#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int ans=0;
	for(int j=1;j<=n;j++){
		int count=0;
		int temp=j;
		for(int i=2;i*i<=j;i++){
		if(temp%i==0){
			while(temp>1 && temp%i==0){
				temp=temp/i;
			}
			count++;
		}
		}
		if(temp>1) count++;
		if(count==2) ans++;
	}
	cout<<ans;
}
