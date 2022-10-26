#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {-1222, 423, -122, -423, -22, 22, 4323, 472, -3, 9423};
    cout << "Maximum Element : " << *max_element(v.begin(), v.end()) << endl;
    cout << "Minimum Element : " << *min_element(v.begin(), v.end()) << endl;
} 