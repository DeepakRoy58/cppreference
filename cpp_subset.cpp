#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

void print_set_range(const std::set<int>& s, int start_val, int end_val) {
    // lower_bound returns an iterator to the first element not less than start_val
    auto lower = s.lower_bound(start_val); 
    // upper_bound returns an iterator to the first element greater than end_val
    auto upper = s.upper_bound(end_val);

    std::cout << "Elements in set from " << start_val << " to " << end_val << " (inclusive):" << std::endl;
    
    // Iterate through the determined range
    for (auto it = lower; it != upper; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Alternative: Copy the range to a new container (like a vector)
    std::vector<int> subset(lower, upper);
    // You can now process 'subset'
}

int main() {
    std::set<int> my_set = {10, 20, 30, 40, 50, 60, 70, 80};
    
    // Get and print elements between 30 and 60
    print_set_range(my_set, 30, 60); 

    // Get and print elements from 1 to 40 (only 10, 20, 30, 40 will be included)
    print_set_range(my_set, 1, 40); 
    
    // Get and print elements from 70 to 100 (only 70, 80 will be included)
    print_set_range(my_set, 70, 100); 

    return 0;
}
