#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Push elements
    v.push_back(10);  // O(1)
    v.push_back(20);  // O(1)
    v.push_back(30);  // O(1)

    cout << "Size: " << v.size() << endl;         // 3
    cout << "Capacity: " << v.capacity() << endl; // Might be >= 3

    // Pop last element
    v.pop_back();  // O(1)

    cout << "After pop_back:\n";
    cout << "Size: " << v.size() << endl;         // 2
    cout << "Capacity: " << v.capacity() << endl; // Capacity unchanged

    // Clear all elements
    v.clear();  // O(n)

    cout << "After clear:\n";
    cout << "Size: " << v.size() << endl;         // 0
    cout << "Capacity: " << v.capacity() << endl; // Capacity still unchanged

    return 0;
}
