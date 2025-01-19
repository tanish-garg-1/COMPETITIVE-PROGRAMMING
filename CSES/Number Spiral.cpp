#include<iostream>
#include<cmath>
using namespace std;
long long power(int x, int n) {
    long long ans = 1;     
    long long base = x;     
    while (n > 0) {
        if (n % 2 == 1) {   
            ans *= base;
        }
        base *= base;       
        n /= 2;             
    }
    return ans;
}

int main(){
	int t;cin>>t;
	while(t--){
		long long x,y;cin>>x>>y;
		x--;y--;
		long long begin;
		if(x>=y){
			if(x%2==0){
				begin=power(x,2)+1;
				cout<<begin+y;
			}
			else{
				begin=power(x+1,2);
				cout<<begin-y;
			}
		}
		else{
			if(y%2==0){
				begin=power(y+1,2);
				cout<<begin-x;
			}
			else{
				begin=power(y,2)+1;
				cout<<begin+x;
			}
		}
		cout<<endl;
	}
}
