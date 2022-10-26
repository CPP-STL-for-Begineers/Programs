#include<bits/stdc++.h>
using namespace std;

int first_occurrence_of(vector<int> &v, int search) {
    // Find the first occurrence of a X in a sorted array. 
    // If it does not exists, return -1
    int n = sizeof(v)/sizeof(v[0]);
    
    vector<int>::iterator lbit;
    int lbin;
    lbit = lower_bound(v.begin(), v.end(), search);
    lbin = lbit - v.begin();

    // Edge case (lbin != n) will help if the iterator does goes above range
    // then it can give error if we accessed in second condition
    if((lbin != n) and (v[lbin] == search)) return lbin;
    else return -1;
}

int last_occurrence_of(vector<int> &v, int search) {
    // Find the last occurrence of a X in a sorted array. 
    // If it does not exists, return -1
    int n = sizeof(v)/sizeof(v[0]);
    
    vector<int>::iterator ubit;
    int ubin;
    ubit = upper_bound(v.begin(), v.end(), search);
    ubin = ubit - v.begin();

    // Decrementing as upper bound return next one greater element position
    ubin--;

    // Edge case (ubin >= 0) will if decrementing the index may result in 
    // index out of bound condition
    // then it can give error if we accessed in second condition
    if((ubin >= 0) and (v[ubin] == search)) return ubin;
    else return -1;
}

int main() {
    vector<int> v {1, 4, 4, 4, 4, 9, 9, 10, 11};
    for(auto &i: v) cout << i << ", "; cout << " | Size : " << v.size() << endl;
    
    sort(v.begin(), v.end());
    for(auto &i: v) cout << i << ", "; cout << " | Size : " << v.size() << endl;

    cout << "-999 : " << first_occurrence_of(v, -999) << endl;
    cout << "   3 : " << first_occurrence_of(v, 3) << endl;
    cout << "   4 : " << first_occurrence_of(v, 4) << endl;
    cout << "   9 : " << first_occurrence_of(v, 9) << endl;
    cout << "  11 : " << first_occurrence_of(v, 11) << endl;
    cout << "  12 : " << first_occurrence_of(v, 12) << endl;
    
    cout << endl;
    for(auto &i: v) cout << i << ", "; cout << " | Size : " << v.size() << endl;
    
    cout << "-999 : " << last_occurrence_of(v, -999) << endl;
    cout << "   3 : " << last_occurrence_of(v, 3) << endl;
    cout << "   4 : " << last_occurrence_of(v, 4) << endl;
    cout << "   9 : " << last_occurrence_of(v, 9) << endl;
    cout << "  11 : " << last_occurrence_of(v, 11) << endl;
    cout << "  12 : " << last_occurrence_of(v, 12) << endl;
}