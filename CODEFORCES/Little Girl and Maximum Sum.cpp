#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,q;cin>>n>>q;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<long long> query(n,0);
	for(int i=0;i<q;i++){
		int l,r;cin>>l>>r;
		query[l-1]++;
		if(r<n) query[r]--;
	}
	for(int i=1;i<n;i++){
		query[i]=query[i]+query[i-1];
	}
	sort(query.begin(),query.end());
	sort(arr.begin(),arr.end());
	long long ans=0;
	for(int i=0;i<n;i++){
		ans=ans+arr[i]*query[i];
	}
	cout<<ans;
}
