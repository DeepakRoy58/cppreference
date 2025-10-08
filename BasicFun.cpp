    #include<iostream>
    using namespace std ; 

    int Sum(int m , int n) 
    {
        int ans = m+n;
        return ans ;
    }


    int main() {
        int a , b;
        cout <<  "Enter Your Two Numbers :  " ; 
        cin  >> a >> b ;

        cout << Sum(a,b) << endl;
        return 0;
    }
