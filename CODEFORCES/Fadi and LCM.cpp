#include<iostream>
#include<cmath>
using namespace std;
bool nothing_common(long long i,long long j){
//	cout<<"function called at "<<i<<" "<<j<<endl;
	long long x=min(i,j);
	for(int k=2;k<=x;k++){
		if(i%k==0 && j%k==0) return false;
	}
	return true;
}
int main(){
	long long x;cin>>x;
	long long s=sqrt(x);
	for(long long i=s;i>0;i--){
		if(x%i==0){
		//	cout<<i<<" "<<x/i<<endl;
			if(nothing_common(i,x/i)==true){
				cout<<i<<" "<<(x/i);
				break;
			}
		}
	}
}
