#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> // Required for std::greater

int main() {
    std::vector<int> vec = {30, 10, 40, 20};

    // Syntax: std::sort(begin, end, comparator)
    std::sort(vec.begin(), vec.end(), std::greater<int>()); 

    // Output the sorted vector
    std::cout << "Sorted Vector (Descending): ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl; // Output: 40 30 20 10
    
    return 0;
}
