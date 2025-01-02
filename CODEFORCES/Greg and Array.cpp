#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    int n, m, k; 
    cin >> n >> m >> k;
    
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    vector<tuple<int, int, int>> opr(m);
    for(int i = 0; i < m; i++) {
        int a, b, c; 
        cin >> a >> b >> c;
        opr[i] = make_tuple(a, b, c);
    }
    
    vector<int> instruction(m, 0);
    for(int i = 0; i < k; i++) {
        int a, b; 
        cin >> a >> b;
        instruction[a - 1]++;
        if (b < m) instruction[b]--;
    }
    
    for(int i = 1; i < m; i++) 
        instruction[i] = instruction[i] + instruction[i - 1];
    
    vector<long long> delta(n, 0);  
    for(int i = 0; i < m; i++) {
        int x = get<0>(opr[i]), y = get<1>(opr[i]), z = get<2>(opr[i]);
        delta[x - 1] = delta[x - 1] + (long long)z * instruction[i];  
        if (y < n) 
            delta[y] = delta[y] - (long long)z * instruction[i]; 
    }
    
    for(int i = 1; i < n; i++) {
        delta[i] += delta[i - 1];
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] += delta[i];
        cout << arr[i] << " ";
    }
}

