#include<iostream>
#include<algorithm>
using namespace std ;

int main() {
    int n  ; 
    cout << "Enter Your Num : " ; 
    cin >> n ;

    int dup  = n ; 
    int revNum = 0 ;

    label: // label for goto
    if (n > 0) {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
        goto label; // jump back and continue
    }

/*     while (n > 0 )
    {
        int lastDigit = n % 10 ; 
        revNum = revNum * 10 + lastDigit ;
        n = n / 10 ;
    }
 */
/*     if(revNum == dup) 
        cout << "True" << endl; 
    else
        cout << "False" << endl;
    
} */


/* use of ternary :

condition ? value_if_true : value_if_false; 
Here, (revNum == dup) is the condition.

If it’s true → "True" is chosen.

If it’s false → "False" is chosen. */

    cout << (revNum == dup ? "True" : "False") << endl;

    }