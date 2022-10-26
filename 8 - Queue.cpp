#include<bits/stdc++.h>
using namespace std;

int main() {
    // FIFO Properties : First In First Out
    // It has main 4 functions : push, pop, front, back
    // Every Operation will perform under constant time in O(1)

    queue<int> q;
    cout << ((q.empty()) ? "Queue is empty\n" : "Queue has element(s)\n");


    q.push(111);
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;
    q.push(222);
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;

    q.emplace(333);
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;
    q.emplace(444);
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;
    
    q.front() += 889;
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;
    q.back() -= 444;
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;
    
    q.pop();
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;
    q.pop();
    cout << "Front : " << q.front() << " | Back : " << q.back() << " | Size : " << q.size() << endl;

    // Rest Functions are same as that of Stack
    // empty, size, swap
}