#include<iostream>
using namespace std;

int main() {
    int n = 5;  // We want 5 rows

    for (int i = 1; i <= n; i++) {       //  OUTER LOOP → controls rows
        for (int j = 1; j <= i; j++) {   //  INNER LOOP → prints numbers in row
            cout << j;
        }
        cout << endl;                    // go to next line
    }

    return 0;
}
