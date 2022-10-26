#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {-1222, 423, -122, -423, -22, 22, 4323, 423, -3, 9423};
    int n = sizeof(v)/ sizeof(v[0]);
    for(auto &i: v) cout << i << ", "; cout << " | Size : " << v.size() << endl;

    vector<int>::iterator ubit;
    int ubin;

    cout << "Without Sorting...." << endl;
    ubit = upper_bound(v.begin(), v.end(), 423);
    ubin = ubit - v.begin();
    cout << "423 - Index : " << ubin << endl;
    
    ubit = upper_bound(v.begin(), v.end(), 500);
    ubin = ubit - v.begin();
    cout << "500 - Index : " << ubin << endl;
    
    ubit = upper_bound(v.begin(), v.end(), -3);
    ubin = ubit - v.begin();
    cout << "-3 - Index : " << ubin << endl;


    cout << "\n\nWith Sorting...." << endl;
    sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>()); // Will not work
    for(auto &i: v) cout << i << ", "; cout << " | Size : " << v.size() << endl;
    
    // Index of item after the last occurrence 
    ubit = upper_bound(v.begin(), v.end(), 423);
    ubin = ubit - v.begin();
    cout << "423 - Index : " << ubin << endl;
    
    // Index of higher number will be returned incase number is not found
    ubit = upper_bound(v.begin(), v.end(), 500);
    ubin = ubit - v.begin();
    cout << "500 - Index : " << ubin << endl;
    
    // Index of higher number will be returned incase number is not found
    ubit = upper_bound(v.begin(), v.end(), -10000); 
    ubin = ubit - v.begin();
    cout << "-10000 - Index : " << ubin << endl;  
    
    // Index of higher number will be returned incase number is not found
    ubit = upper_bound(v.begin(), v.end(), 10000); 
    ubin = ubit - v.begin();
    cout << "10000 - Index : " << ubin << endl;  
    
    // If element found it will return next element index value
    ubit = upper_bound(v.begin(), v.end(), -3); 
    ubin = ubit - v.begin();
    cout << "-3 - Index : " << ubin << endl;
} 