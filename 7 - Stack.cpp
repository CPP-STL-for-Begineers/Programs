#include<bits/stdc++.h>
using namespace std;

int main() {
    // LIFO Properties : Last In First Out
    // It has main 3 functions : push, pop, top
    // Every Operation will perform under constant time in O(1)
    
    stack<int> st;
    if(!st.empty()) cout << "TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    else cout << "Stack is empty | SIZE : " << st.size() << endl;
    st.push(1111);
    cout << "TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    st.push(2222);
    cout << "TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    st.emplace(3333);
    cout << "TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    st.emplace(4444);
    cout << "TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    st.top() += 1111;
    cout << "TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    st.pop();
    cout << "TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    
    stack<int> st1;
    st1.push(999);
    st1.push(888);
    
    cout << "\n\nBefore Swapping : \n";
    cout << "ST  : TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    cout << "ST1 : TOP : " << st1.top() << " | SIZE : " << st1.size() << endl;
    st.swap(st1);

    cout << "\n\nAfter Swapping : \n";
    cout << "ST  : TOP : " << st.top() << " | SIZE : " << st.size() << endl;
    cout << "ST1 : TOP : " << st1.top() << " | SIZE : " << st1.size() << endl;

}