#include<iostream>
#include<vector>
bool is_prime(int n){
	for(int i=3;i<n;i=i+2){
		if(n%i==0) return false;
	}
	return true;
}
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> arr(n);
	int j=0;
	for(int i=3;i<55555;i=i+10){
		if(is_prime(i)==true){
			arr[j]=i;
			j++;
			if(j==n) break;
		}
	}
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
