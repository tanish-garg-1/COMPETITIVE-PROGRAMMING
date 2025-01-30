#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>arr(n+2);
	for(int i=0;i<n+2;i++) arr[i]=0;
	for(int i=2;i*i<=n+2;i++){
		for(int j=i*i;j<n+2;j=j+i){
			arr[j]=1;
		}
	}
	if(n<=2) cout<<"1"<<endl;
	else cout<<"2"<<endl;
	for(int i=2;i<n+2;i++){
		if(arr[i]==0) cout<<1<<" ";
		else cout<<2<<" ";
	}
}
