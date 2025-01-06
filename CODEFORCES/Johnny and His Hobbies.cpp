#include<iostream>
#include<map>
#include<vector>
#include <cmath>
using namespace std;
int main(){ 
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		map<int,int> mymap;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				mymap[arr[i]^arr[j]]++;
			}
		}
		bool got_ans=false;
		for(auto it=mymap.begin();it!=mymap.end();it++){
			if(it->second>=ceil(double(n)/2)){
				cout<<it->first<<endl;
				got_ans=true;
				break;
			}
		}
		if(got_ans==false) cout<<-1<<endl;
	}
}
