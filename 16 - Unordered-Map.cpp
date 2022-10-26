#include<bits/stdc++.h>
using namespace std;

int main() {
    // Key Value Pair
    // It will not store elements in sorted order but rather in random order
    // The keys values are unique
    // Most Operations works in Constant O(1), only in extreme worst case it will be O(n)

    // Syntax be like :
    // unordered_map <key_datatype, value_datatype> name_of_the_container;
    unordered_map <int, int> ump;
    // Also can be defined as :
    // unordered_map <int, pair<int, int>> ump;
    // Or
    // unordered_map <pair<int, int>, int> ump;
    for(auto it: ump) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << ump.size() << endl;

    // Inserting elements in the map
    ump[3] = 333;
    for(auto it: ump) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << ump.size() << endl;
    ump[0] = 0;
    for(auto it: ump) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << ump.size() << endl;
    ump.insert({9,999});
    for(auto it: ump) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << ump.size() << endl;
    ump.insert({7,777});
    for(auto it: ump) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << ump.size() << endl;
    ump.emplace(2,222);
    for(auto it: ump) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << ump.size() << endl;
    ump.emplace(5,555);
    for(auto it: ump) cout << "{ " << it.first << ", " << it.second << "}, "; cout << " | SIZE : " << ump.size() << endl;

    // Accessing values using key
    cout << "ump[3] : " << ump[3] << endl;
    cout << "ump[4] : " << ump[4] << endl; // Doesn't Exist

    // Finding element by key
    // Returns Iterator
    auto find_it1 = ump.find(3);
    cout << "Element Found at : " << "{ " << (*find_it1).first << ", " << (*find_it1).second << " }" << endl;

    auto find_it2 = ump.find(69); // Doesn't Exist
    if(find_it2 == ump.end()) 
        cout << "Element not in the map..." << endl;
    else  
        cout << "Element Found at : " << "{ " << (*find_it2).first << ", " << (*find_it2).second << " }" << endl;

    
    // Other is same as that of vector and some properties of set
    // begin(), end(), rbegin(), rend()
    // clear(), empty(), swap(), erase()

    // Upper and Lower Bound functions are NOT AVAILABLE in Unordered Map
    // auto ubit = ump.upper_bound(2);
    // auto lbit = ump.lower_bound(9);
}