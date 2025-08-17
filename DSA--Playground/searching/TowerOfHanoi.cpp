#include <iostream>
using namespace std;

class Tower {
public:
    void towerOfHanoi(int n, string source, string helper, string destination) {
        if (n == 1) {
            cout << "Move disk 1 from " << source << " to " << destination << endl;
            return;
        }

        // FIXED: correct order of recursive call
        towerOfHanoi(n - 1, source, destination, helper);

        cout << "Move disk " << n << " from " << source << " to " << destination << endl;

        towerOfHanoi(n - 1, helper, source, destination);
    }
};

int main() {
    Tower obj;
    int n;
    cout << "Enter the number of disks that you want to be transferred from source to destination" << endl;
    cin >> n;
    obj.towerOfHanoi(n, "source", "helper", "destination");
    return 0;
}