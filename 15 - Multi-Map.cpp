#include<bits/stdc++.h>
using namespace std;

int main() {
    // Key Value Pair
    // There can be multiple Keys with same key values
    // But the elements are in the sorted manner based on key values

    // Syntax be like :
    // multimap <key_datatype, value_datatype> name_of_the_container;
    multimap <int, int> mmp;
    // Also can be defined as :
    // multimap <int, pair<int, int>> mmp;
    // Or
    // multimap <pair<int, int>, int> mmp;
    for(auto it: mmp) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << mmp.size() << endl;

    // Inserting elements in the map
    mmp.insert({3,444});
    for(auto it: mmp) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << mmp.size() << endl;
    mmp.insert({3,333});
    for(auto it: mmp) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << mmp.size() << endl;
    mmp.insert({3,222});
    for(auto it: mmp) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << mmp.size() << endl;
    mmp.emplace(5,555);
    for(auto it: mmp) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << mmp.size() << endl;
    mmp.emplace(5,666);
    for(auto it: mmp) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << mmp.size() << endl;
    mmp.emplace(5,777);
    for(auto it: mmp) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << mmp.size() << endl;

 
    // // Accessing values using key (NOT AVAILABLE IN MULTISET)
    // cout << "mmp[3] : " << mmp[3] << endl;
    // cout << "mmp[4] : " << mmp[4] << endl; // Doesn't Exist

    // Finding element by key
    // Returns Iterator
    auto find_it1 = mmp.find(3);
    cout << "Element Found at : " << "{ " << (*find_it1).first << ", " << (*find_it1).second << " }" << endl;

    auto find_it2 = mmp.find(2); // Doesn't Exist
    if(find_it2 == mmp.end()) 
        cout << "Element not in the map..." << endl;
    else  
        cout << "Element Found at : " << "{ " << (*find_it2).first << ", " << (*find_it2).second << " }" << endl;

    
    // Other is same as that of vector and some properties of set
    // begin(), end(), rbegin(), rend()
    // clear(), empty(), swap(), erase()

    // Upper and Lower Bound functions are supported as well
    auto ubit = mmp.upper_bound(2);
    auto lbit = mmp.lower_bound(9);
}