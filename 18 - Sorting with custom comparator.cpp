#include<bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> P1, pair <int, int> P2) {
    if(P1.second < P2.second) return true;
    else if(P1.second == P2.second) {
        if(P1.first > P2.second) return true;
        else return false;
    }
    return false;
}

int main() {
    pair<int, int> P[] = {{2, 3}, {2, 4}, {3, 3}, {1, 3}, {1, 4}, {2, 2}};
    int n = sizeof(P) / sizeof(P[0]);
    for(auto &i:P) cout << "{" << i.first << ", " << i.second << "} , "; cout << endl;

    sort(P, P + n);
    for(auto &i:P) cout << "{" << i.first << ", " << i.second << "} , "; cout << endl;

    sort(P, P + n, greater<pair<int,int>>());
    for(auto &i:P) cout << "{" << i.first << ", " << i.second << "} , "; cout << endl;

    // Syntax : sort(begin_it, end_it, comp)
    // Here comp is self written comparator
    // comp is just a boolean function
    sort(P, P + n, comp);
    for(auto &i:P) cout << "{" << i.first << ", " << i.second << "} , "; cout << endl;
}