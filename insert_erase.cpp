#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Insert 25 at 2nd position
    v.insert(v.begin() + 2, 25);

    // Erase element at index 3
    v.erase(v.begin() + 3);

    // Print using iterator
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";

    cout << "\nSize: " << v.size();
    cout << "\nCapacity: " << v.capacity();
}