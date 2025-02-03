#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		vector<pair<int,int>> arr;
		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				int count=0;
				while(x%i==0){
					x=x/i;
					count++;
				}
				arr.push_back({count,i});
			}
		}
		if(x>1) arr.push_back({1,x});
		
		//for(int i=0;i<arr.size();i++) cout<<arr[i].first<<" "<<arr[i].second<<endl;
		sort(arr.begin(),arr.end());
		//vector<pair<int,int>> new_arr;
		int ans=0;
		for(int i=0;i<arr.size();i++){
			if(arr[i].first!=0){
				int c=arr[i].first;
				int prod=1;
				for(int j=i;j<arr.size();j++){
					arr[j].first=arr[j].first-c;
					prod=prod*arr[j].second;
				}
				ans=ans+prod*c;
			}
		}
		cout<<ans<<endl;
	}
}
