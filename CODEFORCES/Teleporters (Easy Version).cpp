#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,cost;
		cin>>n>>cost;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
			arr[i]=arr[i]+i+1;
		} 
		sort(arr.begin(),arr.end());
		int ans=0;
		for(int i=0;i<n;i++){
			if(arr[i]<=cost){
				cost=cost-arr[i];
				ans++;
			}
			else break;
		}
		cout<<ans<<endl;
	}
}
