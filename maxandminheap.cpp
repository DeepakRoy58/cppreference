#include <bits/stdc++.h>
using namespace std;

int main() {
    // max-heap (default)
    priority_queue<int> maxpq;
    maxpq.push(3); maxpq.push(1); maxpq.push(4);
    cout << "max-heap top: " << maxpq.top() << '\n';

    // min-heap using greater<T>
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(3); minpq.push(1); minpq.push(4);
    cout << "min-heap top: " << minpq.top() << '\n';
}
