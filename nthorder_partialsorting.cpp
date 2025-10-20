#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {9, 1, 8, 3, 7, 2, 6};
    // place the 3 smallest elements at front (in any order)
    nth_element(v.begin(), v.begin() + 3, v.end()); // v[0..2] are <= v[3], etc.
    cout << "first 4 after nth_element: ";
    for (int i = 0; i < 4; ++i) cout << v[i] << ' ';
    cout << '\n';
}