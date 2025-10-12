#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double a, b, res;

    // Read the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Read the two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Perform the operation corresponding to the
    //  given operator
    if (op == '+')
        res = a + b;
    else if (op == '-')
        res = a - b;
    else if (op == '*')
        res = a * b;
    else if (op == '/')
        res = a / b;
    else {
        cout << "Error! Operator is not correct";
        res = -DBL_MAX;
    }

    if (res != -DBL_MAX)
        cout << "Result: " << res;
        
    return 0;
}
