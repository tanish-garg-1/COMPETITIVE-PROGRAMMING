#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int find_mex(map<int,int> mymap){
	for(int i=0;i<=200001;i++){
		if(mymap.find(i)==mymap.end()) return i;
	}
	return -1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>arr(n);
		map<int,int> mymap;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mymap[arr[i]]++;
		} 
		int mex=find_mex(mymap);
		bool mexplusone_present= (mymap.find(mex + 1) != mymap.end());
		
		if(mexplusone_present==true){
			int l,r;
			for(int i=0;i<n;i++){
				if(arr[i]==mex+1){
					l=i;break;
				}
			}
			for(int i=n-1;i>=0;i--){
				if(arr[i]==mex+1){
					r=i;break;
				}
			}
			for(int i=l;i<=r;i++) arr[i]=mex;
			
			map<int,int> temp;
			for(int i=0;i<n;i++) temp[arr[i]]++;
			int new_mex=find_mex(temp);
			//cout<<"mex="<<mex<<endl;
			if(new_mex==mex+1) cout<<"Yes";
			else cout<<"No";
		}
		else{
			if(n!=mex) cout<<"Yes";
            else cout<<"No";
		}
		/*else{
			bool greater_exist=false;
			for(int i=0;i<n;i++){
				if(arr[i]>mex){
					greater_exist=true;break;
				}
			}
			if(mymap.size()<n) cout<<"Yes";
			else if(greater_exist==true) cout<<"Yes";
			else cout<<"No";
		}*/
		cout<<endl;
	}
}
