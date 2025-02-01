#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	vector<int>arr;
	for(int i=2;i*i<=n;i++){
		while(n>1 && n%i==0 && arr.size()<k-1){
			arr.push_back(i);
			n=n/i;
		}
		if(arr.size()==k-1) break;
	}
	if(arr.size()==k-1 && n>1){
		arr.push_back(n);
		for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
	}
	else cout<<"-1";
}
