#include<iostream>
#include<vector>
using namespace std;
void knapsack(int i,int weight,int profit,int &sol,vector<pair<int,int>> arr){
	if(weight<0) return;
	if(i==arr.size()){
		sol=max(sol,profit);
		return;
	}
	knapsack(i+1,weight,profit,sol,arr);
	knapsack(i+1,weight-arr[i].first,profit+arr[i].second,sol,arr);
}
int main(){
	int n,w;cin>>n>>w;
	vector<pair<int,int>> arr;
	for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		arr.push_back({a,b}); 
	}
	int sol=0;
	knapsack(0,w,0,sol,arr);
	cout<<sol;
}
