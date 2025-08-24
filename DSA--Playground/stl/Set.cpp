#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // inserting elements
    s.insert(5);
    s.insert(1);
    s.insert(10);
    s.insert(5); // duplicate, will not be added

    cout << "Elements of set: ";
    for (auto it : s) {
        cout << it << " ";
    }
    cout << endl;

    // searching
    if (s.find(10) != s.end())
        cout << "10 found in set" << endl;
    else
        cout << "10 not found" << endl;

    // removing
    s.erase(1);
    cout << "After erasing 1: ";
    for (auto it : s) {
        cout << it << " ";
    }
    cout << endl;

    // checking existence
    cout << "Is 5 present? " << (s.count(5) ? "Yes" : "No") << endl;
    cout << "Is 2 present? " << (s.count(2) ? "Yes" : "No") << endl;

    return 0;
}