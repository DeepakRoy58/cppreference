#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {10, 5, 2, 8};

    v.push_back(15);
    v.insert(v.begin() + 1, 7);

    std::sort(v.begin(), v.end());

    for (int num : v) {
        std::cout << num << " ";
    }

    std::cout << "\nSize: " << v.size() << "\n";
    std::cout << "Capacity: " << v.capacity() << "\n";
}
