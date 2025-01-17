#include<iostream>
#include<vector>
using namespace std;
void calculate(bool &ans,int index,vector<int> arr,int n,int x,int sol){
	if(ans==true) return;
	if(index==n){
		if(x==sol){
			ans=true;
		}
		return;
	} 
	calculate(ans,index+1,arr,n,x,sol+arr[index]);
	calculate(ans,index+1,arr,n,x,sol-arr[index]);
}
using namespace std;
int main(){
	int n,x;cin>>n>>x;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	bool ans=false;
	calculate(ans,1,arr,n,x,arr[0]);
	if(ans==true) cout<<"YES";
	else cout<<"NO";
}

