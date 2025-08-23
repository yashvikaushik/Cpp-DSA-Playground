#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // pushing elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // first element
    cout << "Back element: " << q.back() << endl;   // last element

    // popping element (removes from front)
    q.pop();

    cout << "After one pop, front element: " << q.front() << endl;

    // size
    cout << "Size of queue: " << q.size() << endl;

    // check empty
    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}