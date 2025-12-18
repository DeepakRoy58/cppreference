#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Problem:
/*
   Briefly describe the problem or paste sample input/output here.
   there are N childrens , each child 1  , 
   1 chocolate packet = 4 chocolates
*/

// Observations:
/*
   - Note patterns, constraints, edge cases, or hints.
   eg , no of chidlrens  = 10 , no of packets =2 ;
   chocolate available = 2*4 ;
   additional packets = x(2/4) 
*/

// Approach:
/*
   - Step-by-step explanation of your algorithm.
   Each child must get exactly 1 chocolate.
   One chocolate packet contains 4 chocolates.
*/

#include <iostream>
using namespace std;

int main() {
    int childs = 10;
    int packets = 2;

    int chocolates = packets * 4;
    int additional = (childs - chocolates + 3) / 4;

    cout << additional;
    return 0;
}

void solve() {
    // Write your solution here
    
}

/* int32_t main() {
    fastio;
    int T = 1;
    // cin >> T; // Uncomment if multiple test cases
    while (T--) solve();
    return 0;
}
 */
// Notes:
/*
   - Keep solutions simple and readable.
   - Always verify constraints and edge cases.
*/
