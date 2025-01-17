#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void calculate(int &ans,int sum,int row,int col,int m,int n,vector<vector<int>>& arr){
	sum=sum+arr[row][col]; 
	if(row==m-1 && col==n-1){
		ans=max(sum,ans);
		return;
	}
	if(col+1<n) calculate(ans,sum,row,col+1,m,n,arr);
	if(row+1<m) calculate(ans,sum,row+1,col,m,n,arr);
}
int main(){
	int m,n;cin>>m>>n;
	vector<vector<int>> arr(m,vector<int>(n));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}
	int ans=INT_MIN;
	calculate(ans,0,0,0,m,n,arr);
	cout<<ans;
}
