#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l; // empty list of integers

    // inserting elements
    l.push_back(10);   // insert at end
    l.push_back(20);
    l.push_front(5);   // insert at beginning

    cout << "List elements: ";
    for (int x : l) {
        cout << x << " ";
    }
    cout << endl;

    // removing elements
    l.pop_back();  // removes last element
    l.pop_front(); // removes first element

    cout << "After popping front and back: ";
    for (int x : l) {
        cout << x << " ";
    }
    cout << endl;

    // inserting using iterator
    auto it = l.begin();
    advance(it, 1);   // move iterator to 2nd position
    l.insert(it, 15); // insert before iterator

    cout << "After inserting 15 in middle: ";
    for (int x : l) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}