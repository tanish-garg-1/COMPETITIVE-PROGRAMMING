#include<iostream>
#include<cmath>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    
    int sizee=cbrt(9e18+1000);
    vector<bool> prime(sizee+1,true);
    prime[0]=prime[1]=false;
    
    for(int i=2;i*i<=sizee;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=sizee;j+=i){
            prime[j]=false;
            }
        }
    }
    
    vector<long long> prime_nos;
    for(int i=0;i<=sizee;i++){
        if(prime[i]==true){
            prime_nos.push_back(i);
        }
    }
    
    while(t--){
        long long x;cin>>x;
        for(long long i=0;i<(long long)prime_nos.size();i++){
            if(x%(1ll * prime_nos[i]*prime_nos[i])==0){
                cout<<prime_nos[i]<<" "<<x/(prime_nos[i]*prime_nos[i]);
                cout<<endl;
                break;
            }
            else if(x%prime_nos[i]==0){
                long long a=x/prime_nos[i];
                long long b=round(sqrtl(a));
                cout<<b<<" "<<prime_nos[i];
                cout<<endl;
                break;
            }
        }
    }
    return 0;
}
