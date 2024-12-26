#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	vector<long long int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=1;i<n;i++){
		arr[i]=arr[i]+arr[i-1];
	}
	//for(int i=0;i<n;i++) cout<<arr[i];
	//cout<<endl;
	int a,b;
	while(q--){
		cin>>a>>b;
		a=a-1;b=b-1;
		if(a==0) cout<<arr[b]<<endl;
		else cout<<arr[b]-arr[a-1]<<endl;
	}
}
