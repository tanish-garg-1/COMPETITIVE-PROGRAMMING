#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	int n,k,q;cin>>n>>k>>q;
	map<int,int> mymap;
	int max_recipie=0;int min_recipie=INT_MAX;
	for(int i=0;i<n;i++){
		int l,r;cin>>l>>r;
		mymap[l]++;mymap[r+1]--;
		max_recipie=max(max_recipie,r+1);
		min_recipie=min(min_recipie,l);
	}
	vector<int> recipie(max_recipie+1,0);
	for(int i=min_recipie;i<=max_recipie;i++){
		if(mymap.find(i) != mymap.end()){
			recipie[i]=mymap[i];
		}
		recipie[i]=recipie[i]+recipie[i-1];
		//cout<<recipie[i]<<" ";
	}
	
	for(int i=min_recipie;i<=max_recipie;i++){
		if(recipie[i]>=k) recipie[i]=1;
		else recipie[i]=0;
		recipie[i]=recipie[i]+recipie[i-1];
		//cout<<recipie[i]<<" ";
	}
	//cout<<endl;
	for(int i=0;i<q;i++){
		int l,r;cin>>l>>r;
		l=l-1;
		if(r>max_recipie){
			r=max_recipie;
		}
		if(l>max_recipie){
			l=max_recipie;
		}
		if(r<min_recipie){
			r=0;
		}
		if(l<min_recipie){
			l=0;
		}
		cout<<recipie[r]-recipie[l]<<endl;
	}
	
}
