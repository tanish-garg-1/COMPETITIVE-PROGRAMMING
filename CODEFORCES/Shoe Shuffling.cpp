#include<iostream>
#include<vector>
using namespace std;
void pass(int i,int j,vector<int> &sol){
	for(int x=i;x<=j;x++) sol[x]=x+1;
	sol[i]=sol[i]+j-i;
	for(int x=i+1;x<=j;x++) sol[x]=sol[x]-1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> arr(n);
		vector<int> sol(n,0);
		for(int i=0;i<n;i++) cin>>arr[i];
		bool ans_printed=false;
		for(int i=0;i<n;i++){
			int j=i+1;
			if(j>=n || arr[i]!=arr[j]){
				cout<<-1<<endl;
				ans_printed=true;
				break;
			}
			while(j<n && arr[j]==arr[i]) j++;
			pass(i,j-1,sol);
			i=j-1;
		}
		if(ans_printed==false){
			for(int i=0;i<n;i++) cout<<sol[i]<<" ";
			cout<<endl;
		}
	}
}
