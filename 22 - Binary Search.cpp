#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {-1222, 423, -122, -423, -22, 22, 4323, 472, -3, 9423};
    int n = sizeof(v)/ sizeof(v[0]);

    bool is_avail;
    is_avail = binary_search(v.begin(), v.end(), -3);
    cout << "is_avail : " << is_avail << endl;

    is_avail = binary_search(v.begin(), v.end(), 123);
    cout << "is_avail : " << is_avail << endl;

    // can't get output so we will sort the vector first
    sort(v.begin(), v.end());
    is_avail = binary_search(v.begin(), v.end(), -3);
    cout << "is_avail : " << is_avail << endl;

    is_avail = binary_search(v.begin(), v.end(), 123);
    cout << "is_avail : " << is_avail << endl;

} 