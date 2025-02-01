#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int n; cin>>n;
	const int maxx= 1e6;
	vector<int>arr(maxx+1,0);
	for(long long i=2;i*i<=maxx;i++){
		for(long long j=i*i;j<=maxx;j=j+i){
			arr[j]=1;
		}
	}
	arr[1]=1;
	for(int i=0;i<n;i++){
		long long x;cin>>x;
		double s=sqrt(static_cast<double>(x));
		if(floor(s)==s  && arr[s]==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		//cout<<"s="<<s<<"    arr[s]="<<arr[s];
	}
}
