#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	sort(arr.begin(),arr.end());
	int median;
	if(n%2==1) median=arr[n/2];
	else median=(arr[n/2]+arr[(n/2)-1])/2;
	long long cost=0;
	for(int i=0;i<n;i++){
		cost=cost+abs(median-arr[i]);
	}
	cout<<cost;
}
