#include<iostream>
#include<vector>
using namespace std;
bool is_prime(int n){
	for(int i=2;i*i<=n;i++) if(n%i==0) return false;
	return true;
}
int main(){
	int n,m; cin>>n>>m;
	vector<vector<int>> arr(n,vector<int>(m));
	int maxx=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
			maxx=max(maxx,arr[i][j]);
		}
	}
	maxx++;
	while(is_prime(maxx)==false) maxx++;
//	cout<<"maxx="<<maxx<<endl;
	
	vector<int> distance(maxx+1,0);
	for(int i=2;i*i<=maxx;i++){
		for(int j=i*i;j<=maxx;j=j+i){
			distance[j]=1;
		}
	}
	distance[0]=distance[1]=1;
	
	int count=0;
	for(int i=maxx-1;i>=0;i--){
		if(distance[i]==0){
			count=0;
		}
		else{
			count++;distance[i]=count;
		}
	}
//	cout<<"distance array ";
//	for(int i=0;i<=maxx;i++) cout<<distance[i]<<" ";
//	cout<<endl;
	
	int cost=INT_MAX;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			int x=arr[i][j];
			arr[i][j]=distance[x];
			sum=sum+arr[i][j];
		}
		cost=min(cost,sum);
	}
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum=sum+arr[j][i];
		}
		cost=min(cost,sum);
	}
	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<cost;
}
