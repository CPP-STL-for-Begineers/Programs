#include<bits/stdc++.h>
using namespace std;

int main() {

    // It has main 3 functions : push, pop, top
    // TOP : Largest element will be at top whether it be largest int, double or lexicographically the string
    // It is not a linear data structure inside it a tree data structure is maintained
    // Push --> O(log(n))
    // Top  --> O(1)
    // Pop  --> O(log(n))
    priority_queue<int> pq;
    cout << ((pq.empty()) ? "Priority Queue is empty\n" : "Priority Queue has element(s)\n");
    
    pq.push(5);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.push(3);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(20);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(10);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(30);
    cout << "TOP : " << pq.top() << " | SIZE : " << pq.size() << endl;
    pq.emplace(5);
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