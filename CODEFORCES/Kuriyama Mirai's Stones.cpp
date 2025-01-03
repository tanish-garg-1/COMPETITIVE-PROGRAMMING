#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;cin>>n;
	vector<long long>type1(n);
	vector<long long>type2(n);
	type1[-1]=0;type2[-1]=0;
	for(int i=0;i<n;i++){
		int temp;cin>>temp;type1[i]=temp;type2[i]=temp;
	}
	sort(type2.begin(),type2.end());
	for(int i=1;i<n;i++){
		type1[i]=type1[i]+type1[i-1];
		type2[i]=type2[i]+type2[i-1];
	}
	int m;cin>>m;
	for(int i=0;i<m;i++){
		int t,l,r;cin>>t>>l>>r;
		if(t==1){
			cout<<type1[r-1]-type1[l-2]<<endl;
		}
		else cout<<type2[r-1]-type2[l-2]<<endl;
	}
}
