#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map (key -> value)
    map<int, string> m;

    // Insertion
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";
    m[4] = "Mango";

    cout << "Initial Map:\n";
    for (auto it : m) {
        cout << it.first << " -> " << it.second << endl;
    }

    // -------- count() --------
    cout << "\nCount for key 2: " << m.count(2) << endl;   // Exists → 1
    cout << "Count for key 5: " << m.count(5) << endl;   // Not exists → 0

    // -------- find() --------
    auto it = m.find(3);
    if (it != m.end()) {
        cout << "\nKey 3 found: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "\nKey 3 not found.\n";
    }

    // -------- erase() --------
    cout << "\nErasing key 2...\n";
    m.erase(2);

    cout << "Map after erase:\n";
    for (auto it : m) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}