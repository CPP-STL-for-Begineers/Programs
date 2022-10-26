#include<bits/stdc++.h>
using namespace std;

int main() {

    // It has main 3 functions : push, pop, top
    // TOP : Smallest element will be at top whether it be smallest int, double or lexicographically the string
    // It is not a linear data structure inside it a tree data structure is maintained
    // Push --> O(log(n))
    // Top --> O(1)
    // Pop --> O(log(n))
    priority_queue<int, vector<int>, greater<int>> pq;
    cout << ((pq.empty()) ? "Priority Queue is empty\n" : "Priority Queue has element(s)\n");
    
    pq.push(5);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.push(-3);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(3);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(100);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(-999);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(1000);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;

    cout << "\n\nRemoving Element from Queue : \n\n";

    pq.pop();
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << " | EMPTY : " << pq.empty() << endl;
    pq.pop();
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << " | EMPTY : " << pq.empty() << endl;
    pq.pop();
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << " | EMPTY : " << pq.empty() << endl;
    pq.pop();
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << " | EMPTY : " << pq.empty() << endl;
    pq.pop();
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << " | EMPTY : " << pq.empty() << endl;
    pq.pop();
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << " | EMPTY : " << pq.empty() << endl;
}