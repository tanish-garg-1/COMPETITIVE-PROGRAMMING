#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void convert_to_string(long long n, string &s) {
    s = "";
    while (n > 0) {
        s = to_string(n % 10) + s;
        n /= 10;
    }
}

int main(){
	int q;cin>>q;
	while(q--){
		long long k;cin>>k;
		long long curr=0,prev,sum=0,i=0;
		while(sum<k){
			prev=curr;
			long long power_of_10 = 1;
for (int j = 0; j < i; j++) {
    power_of_10 *= 10;
}
curr = 9 * power_of_10 * (i + 1);

			sum=sum+curr;
			i++;
		}
	
		prev=k-sum+curr;
		long long number = (prev + i - 1) / i;

		long long place=prev%i; if(place==0) place=i;
		number=number+static_cast<long long>(pow(10, i-1))-1;
		string s;
		convert_to_string(number,s);
		cout<<s[place-1]<<endl;
	}
}
