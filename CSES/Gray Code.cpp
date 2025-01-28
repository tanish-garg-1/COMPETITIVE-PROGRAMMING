#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int n;cin>>n;
	int total=pow(2,n);
	n=n-1;
	vector<string> arr={"0","1"};
	while(n--){
		int sizee=arr.size();
		for(int i=sizee-1;i>=0;i--){
			arr.push_back(arr[i]);
		}
		for(int i=0;i<sizee;i++) arr[i]="0"+arr[i];
		for(int i=sizee;i<2*sizee;i++) arr[i]="1"+arr[i];
	}
	for(int i=0;i<total;i++) cout<<arr[i]<<endl;
}
