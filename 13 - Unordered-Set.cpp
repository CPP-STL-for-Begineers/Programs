#include<bits/stdc++.h>
using namespace std;

int main() {
    // Unordered Set : Unique
    // Unlike normal set it stores element in unsorted order
    // Most of the operations take O(1) unlike Set and multi-set

    // Element are stored in random order
    unordered_set<int> ust;
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;
    
    ust.insert(333);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;
    ust.insert(3);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;
    ust.insert(5);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;
    ust.emplace(7);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;
    ust.emplace(2);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;
    ust.emplace(333);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;
    
    // Functionality of insert in vector can be used also, that only increases efficiency
    
    // begin(), end(), rbegin(), rend(), size()
    // empty(), and swap() are same as that of vector

    cout << "\n\nfind() in the Set container: \n";
    // Return Iterator
    auto it = ust.find(333);
    cout << "*it :" << *it << endl;
    // Returns ust.end() iterator if the element not founds 
    if(ust.end() == ust.find(555)) cout << "Element not Found!!";
    else cout << "Element Found!!";
    cout << endl;

    cout << "ust.count(333) : " << ust.count(333) << endl;    
    cout << "ust.count(555) : " << ust.count(555) << endl;    

    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;

    // Erase given value
    ust.erase(5); // Takes logarithmic Time
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;

    // Erase given iterator
    auto to_del = ust.find(333);    
    ust.erase(to_del); // Takes Constant Time
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;

    // Erase (CLEAR) Everything
    ust.clear();
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;

    cout << "\n\n\n";

    for(auto &i:{1,2,3,4,5,6,7,8,9,10}) ust.insert(i);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;

    // Erase Element In range of : [First, Last] : Via Iterators
    auto start = ust.find(4); // start : inclusive
    auto end = ust.find(9);   //   end : exclusive
    ust.erase(start, end);
    for(auto &i: ust) cout << i << ", "; cout << " | SIZE : " << ust.size() << endl;

    // TODO : Study upper_bound() and lower_bound()
    // Unlink Set and multiset,
    // unordered set does not supports lower_bound() and upper_bound()
   
    // auto it_lb = ust.lower_bound(3);
    // auto it_ub = ust.upper_bound(9);
}