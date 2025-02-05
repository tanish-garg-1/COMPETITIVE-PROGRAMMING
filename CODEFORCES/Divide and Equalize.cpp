#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		unordered_map<int,int> mymap;
		
		for(int i=0;i<n;i++){
			int x;cin>>x;
			for(int i=2;i*i<=x;i++){
				if(x%i==0){
					while(x%i==0){
						mymap[i]++;
						x=x/i;
					}
				}
			}
			if(x>1) mymap[x]++;
		}
		
		bool ans=true;
		for(auto it=mymap.begin();it!=mymap.end();it++){
			if((it->second)%n != 0){
				ans=false;
				break;
			}
		}
		
		if(ans==true) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
