#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long ans = -1;
        
        // Check all divisors of b
        for (long long k = 1; k * k <= b; k++) {
            if (b % k == 0) {
                // Check k as a divisor
                long long sum = a * k + b / k;
                if (sum % 2 == 0) {
                    ans = max(ans, sum);
                }
                
                // Check b/k as a divisor (if different from k)
                if (k != b / k) {
                    long long k2 = b / k;
                    sum = a * k2 + b / k2;
                    if (sum % 2 == 0) {
                        ans = max(ans, sum);
                    }
                }
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}