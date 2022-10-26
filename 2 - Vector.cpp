#include<bits/stdc++.h>
using namespace std;

int main() {
    {
        vector<int> v = {111,222};
        for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
        v.push_back(333); // Slower
        for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
        v.emplace_back(111); // Faster
        for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
    }
    cout << endl;
    {
        vector<pair<int, int>> v = {{111,222}};
        for(auto &i: v) cout << "{" <<i.first << ", " << i.second<< "}, "; cout << " | v.size() : " << v.size() << endl;
        v.push_back({333,444});
        for(auto &i: v) cout << "{" <<i.first << ", " << i.second<< "}, "; cout << " | v.size() : " << v.size() << endl;
        v.emplace_back(555,666);  // No need of { } for pair
        for(auto &i: v) cout << "{" <<i.first << ", " << i.second<< "}, "; cout << " | v.size() : " << v.size() << endl;
    }
    cout << endl;
    {
        vector<int> v(5);
        for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
    }
    cout << endl;
    {
        vector<int> v(5,333);
        for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
    }
    cout << endl;
    {
        vector<int> v(5,333);
        for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
        vector<int> v_copy(v);
        for(auto &i: v_copy) cout << i << " "; cout << " | v_copy.size() : " << v_copy.size() << endl;

    }
    


}