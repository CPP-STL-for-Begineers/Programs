#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {-1222, 423, -122, -423, -22, 22, 4323, 423, -3, 9423};
    int n = sizeof(v)/ sizeof(v[0]);
    for(auto &i: v) cout << i << ", "; cout << " | Size : " << v.size() << endl;

    vector<int>::iterator lbit;
    int lbin;

    cout << "Without Sorting...." << endl;
    lbit = lower_bound(v.begin(), v.end(), 423);
    lbin = lbit - v.begin();
    cout << "423 - Index : " << lbin << endl;
    
    lbit = lower_bound(v.begin(), v.end(), 500);
    lbin = lbit - v.begin();
    cout << "500 - Index : " << lbin << endl;
    
    lbit = lower_bound(v.begin(), v.end(), -3);
    lbin = lbit - v.begin();
    cout << " -3 - Index : " << lbin << endl;


    cout << "\n\nWith Sorting...." << endl;
    sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>()); // Will not work
    for(auto &i: v) cout << i << ", "; cout << " | Size : " << v.size() << endl;
    
    // Index of first occurrence will returned if 2 elements with same value found
    lbit = lower_bound(v.begin(), v.end(), 423);
    lbin = lbit - v.begin();
    cout << "423 - Index : " << lbin << endl;
    
    // Index of higher number will be returned incase number is not found
    lbit = lower_bound(v.begin(), v.end(), 500);
    lbin = lbit - v.begin();
    cout << "500 - Index : " << lbin << endl;
    
    // Index of higher number will be returned incase number is not found
    lbit = lower_bound(v.begin(), v.end(), -10000); 
    lbin = lbit - v.begin();
    cout << "-10000 - Index : " << lbin << endl;  
    
    // Index of higher number will be returned incase number is not found
    lbit = lower_bound(v.begin(), v.end(), 10000); 
    lbin = lbit - v.begin();
    cout << "10000 - Index : " << lbin << endl;  
    
    // Exact Index will be returned for exact value
    lbit = lower_bound(v.begin(), v.end(), -3); 
    lbin = lbit - v.begin();
    cout << "-3 - Index : " << lbin << endl;
} 