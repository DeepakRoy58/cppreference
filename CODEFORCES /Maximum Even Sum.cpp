#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long ans = -1; 

        vector<long long> students = {1, b};
        if (b % 2 == 0) {
            students.push_back(2);
            students.push_back(b / 2);
        }

        for (long long k : students) {
            if (b % k == 0) {
                long long sum = a * k + b / k;
                if (sum % 2 == 0) {
                    ans = max(ans, sum);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
