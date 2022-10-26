#include<bits/stdc++.h>
using namespace std;


int main() {
    int n = 7;
    int cnt = __builtin_popcount(n);
    cout << "n : " << n << " | cnt of set bits : " << cnt << endl;
    
    long long num = 1234567890123LL;
    cnt = __builtin_popcountll(num);
    cout << "num : " << num << " | cnt of set bits : " << cnt << endl;
}