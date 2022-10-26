#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq = {111, 222, 333, 444, 555};
    for(auto &i: dq) cout << i << ", "; cout << " | dq.size() : " << dq.size() << endl;
 
    // Add Element to Rear
    dq.push_back(666);
    for(auto &i: dq) cout << i << ", "; cout << " | dq.size() : " << dq.size() << endl;
    dq.emplace_back(777);
    for(auto &i: dq) cout << i << ", "; cout << " | dq.size() : " << dq.size() << endl;

    // Add Element to Front
    dq.push_front(99999);
    for(auto &i: dq) cout << i << ", "; cout << " | dq.size() : " << dq.size() << endl;
    dq.emplace_front(88888);
    for(auto &i: dq) cout << i << ", "; cout << " | dq.size() : " << dq.size() << endl;

    // Remove Element from Rear
    dq.pop_back();
    for(auto &i: dq) cout << i << ", "; cout << " | dq.size() : " << dq.size() << endl;

    // Remove Element from Front
    dq.pop_front();
    for(auto &i: dq) cout << i << ", "; cout << " | dq.size() : " << dq.size() << endl;

    cout << "dq.back() : " << dq.back() << endl;
    cout << "dq.front() : " << dq.front() << endl;

    // Rest Functions are same as that of List and Vector
    // begin, end, rbegin, rend
    // clear, insert, size, swap
}