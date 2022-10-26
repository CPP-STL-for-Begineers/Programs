#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
    
    cout << "\n\nElement Deletion :" << endl;

    v.erase(v.begin()+2); //v[2] --> 33 //Delete Single Element
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
    
    v.erase(v.begin()+4, v.begin()+7); //v[4] ~ v[7 - 1] //Delete Multiple Elements
    // Syntax (Erase_from_Inclusive, Erase_to_Exclusive)
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;

    cout << "\n\nElement Insertion :" << endl;
    
    v.insert(v.begin()+2,333);
    // Syntax (at_Position, value)
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;

    v.insert(v.begin()+5, 3, 33333);
    // Syntax (at_Position, count, value)
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;

    vector<int> v12 = {5,4,3,2,1};
    v.insert(v.begin()+2, v12.begin(), v12.begin()+2);
    // Syntax (at_Position, Vector2_Iterator_from_Inclusive, Vector3_Iterator_to_Exclusive)
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;

    v.pop_back(); // Removes Last element form vector
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;

    cout << "\n\nBefore Swapping : " << endl;
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
    for(auto &i: v12) cout << i << " "; cout << " | v12.size() : " << v12.size() << endl;
    
    v.swap(v12); // Swap the Vector
    
    cout << "After Swapping : " << endl;
    for(auto &i: v) cout << i << " "; cout << " | v.size() : " << v.size() << endl;
    for(auto &i: v12) cout << i << " "; cout << " | v12.size() : " << v12.size() << endl;

    cout << "\n\nClearing out Vector :" << endl;
    cout << "v12.empty() : " << v12.empty() << endl;
    for(auto &i: v12) cout << i << " "; cout << " | v12.size() : " << v12.size() << endl;
    v12.clear(); // Removes Every Element from the Vector
    cout << "v12.empty() : " << v12.empty() << endl;
    for(auto &i: v12) cout << i << " "; cout << " | v12.size() : " << v12.size() << endl;
    
}