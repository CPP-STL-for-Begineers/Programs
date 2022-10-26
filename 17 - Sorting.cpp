#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {67, 345, 66, 112, 56, 24, 76, 123, 135, 345};
    for(auto &i : v) cout << i << ", "; cout << " | Size : " << v.size() << endl;

    sort(v.begin(), v.end()); // Sorts in ascending order by default
    for(auto &i : v) cout << i << ", "; cout << " | Size : " << v.size() << endl;

    sort(v.begin(), v.end(), greater<int>()); // Sorts in descending order
    for(auto &i : v) cout << i << ", "; cout << " | Size : " << v.size() << endl;
}