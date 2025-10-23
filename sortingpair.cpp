#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> v = {{2,5},{1,3},{2,4},{1,2}};
    
    sort(v.begin(), v.end(), [](auto &a, auto &b){
        if (a.first != b.first)
            return a.first < b.first;  // Ascending by first
        return a.second > b.second;    // Descending by second
    });

    cout << "Sorted pairs: ";
    for (auto &p : v)
        cout << '(' << p.first << ',' << p.second << ") ";
    cout << '\n';
}
