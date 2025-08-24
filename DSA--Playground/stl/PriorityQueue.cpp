#include <iostream>
#include <queue>   // for queue and priority_queue
using namespace std;

int main() {
    // ---------------- Normal Queue ----------------
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Normal Queue (FIFO):" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";  // prints first element
        q.pop();                   // removes it
    }
    cout << endl;

    // ---------------- Priority Queue (Max-Heap by default) ----------------
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Priority Queue (Max-Heap):" << endl;
    while (!pq.empty()) {
        cout << pq.top() << " ";  // prints largest element
        pq.pop();                 // removes it
    }
    cout << endl;

    // ---------------- Priority Queue (Min-Heap) ----------------
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(10);
    minPQ.push(30);
    minPQ.push(20);

    cout << "Priority Queue (Min-Heap):" << endl;
    while (!minPQ.empty()) {
        cout << minPQ.top() << " ";  // prints smallest element
        minPQ.pop();
    }
    cout << endl;

    return 0;
}