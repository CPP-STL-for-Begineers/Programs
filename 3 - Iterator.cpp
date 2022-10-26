#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {99999,8888,777,66,5};
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;    

    vector<int>::iterator it;
    it = v.begin();
    cout << "v.begin() : " << *it << endl;
    it = v.end();
    cout << "v.end() : " << *it << endl;
    it--;
    cout << "v.end()-- : " << *it << endl;
    cout << endl;
    for(auto it = v.begin(); it != v.end(); it++) cout << *it << ", ";
    cout << endl;
    for(auto it = v.rbegin(); it != v.rend(); it++) cout << *it << ", ";
    cout << endl;
    cout << "v.back() : " << v.back() << endl;
}