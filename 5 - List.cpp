#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls = {111, 222, 333, 444, 555, 666};
    for(auto &i: ls) cout << i << ", "; cout << " | ls.size() : " << ls.size() << endl;
    // List insertion operations are cheaper as compared to that of the vector
    // in terms of time complexity

    // List is based on Doubly Linked list 
    // whereas
    // Vector is based on Singly Linked List
    ls.push_back(99999);
    for(auto &i: ls) cout << i << ", "; cout << " | ls.size() : " << ls.size() << endl;
    ls.emplace_back(100000);
    for(auto &i: ls) cout << i << ", "; cout << " | ls.size() : " << ls.size() << endl;

    // unlike vectors we can also insert infront of the list with functions
    ls.push_front(1);
    for(auto &i: ls) cout << i << ", "; cout << " | ls.size() : " << ls.size() << endl;
    ls.emplace_front(0);
    for(auto &i: ls) cout << i << ", "; cout << " | ls.size() : " << ls.size() << endl;

    // In list we can also remove element form the front
    ls.pop_back();
    for(auto &i: ls) cout << i << ", "; cout << " | ls.size() : " << ls.size() << endl;
    ls.pop_front();
    for(auto &i: ls) cout << i << ", "; cout << " | ls.size() : " << ls.size() << endl;


    // Rest of the list functions are same as that of vector
    // begin(), end(), rbegin(), rend()
    // clear(), empty(), insert(), size(), swap()
}