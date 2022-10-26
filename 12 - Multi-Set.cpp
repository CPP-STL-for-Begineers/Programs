#include<bits/stdc++.h>
using namespace std;

int main() {
    // Multi-Set : Sorted
    // Unlike Normal set it have multiple occurrences of repeated values
    // Rest Everything is similar to that of Normal Set

    // It is not a linear container, the internal structure is stored in tree like container
    // Most of the operations take O(log(n))
    multiset<int> mst;
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;
    
    mst.insert(333);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;
    mst.insert(3);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;
    mst.insert(5);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;
    mst.emplace(333);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;
    mst.emplace(2);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;
    mst.emplace(333);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;
    
    // Functionality of insert in vector can be used also, that only increases efficiency
    
    // begin(), end(), rbegin(), rend(), size()
    // empty(), and swap() are same as that of vector

    cout << "\n\nfind() in the Set container: \n";
    // Return Iterator of the first occurrence
    auto it = mst.find(333);
    cout << "*it :" << *it << endl;
    // Returns mst.end() iterator if the element not founds 
    if(mst.end() == mst.find(555)) cout << "Element not Found!!";
    else cout << "Element Found!!";
    cout << endl;

    cout << "mst.count(333) : " << mst.count(333) << endl;    
    cout << "mst.count(555) : " << mst.count(555) << endl;    

    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;

    //IMPORTANT ----------------------------------------------------|
    // Unlike normal set
    // All occurrences are erased

    // Erase given value
    mst.erase(5); // Takes logarithmic Time
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;

    // Erase given iterator 
    // Here it will delete only the first occurrence of that given number to find
    auto to_del = mst.find(333);    
    mst.erase(to_del); // Takes Constant Time
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;

    // Erase (CLEAR) Everything
    mst.clear();
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;

    cout << "\n\n\n";

    for(auto &i:{1,2,4,39,9,9,1,4,3,4,2,56,7,8,9,3,3,5,4,9,9,9,99,9,9,9,9,56,9}) mst.insert(i);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;

    // Erase Element In range of : [First, Last] : Via Iterators
    auto start = mst.find(4); // start : inclusive
    auto end = mst.find(56);   //   end : exclusive
    mst.erase(start, end);
    for(auto &i: mst) cout << i << ", "; cout << " | SIZE : " << mst.size() << endl;

    // TODO : Study upper_bound() and lower_bound()

    auto it_lb = mst.lower_bound(3);
    auto it_ub = mst.upper_bound(9);
}