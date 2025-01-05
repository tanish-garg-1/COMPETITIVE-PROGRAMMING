#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		int n;cin>>n;
		vector<long long> arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=1;i<=61;i++){
			unordered_map<long long,long long> mymap;
			for(int j=0;j<n;j++){
				mymap[arr[j]%(1ll<<i)]++;
				if(mymap.size()>2)break;
				}
				if(mymap.size()==2){
					cout<<(1ll<<i)<<endl;
					break;
				}
		}
	}
}
