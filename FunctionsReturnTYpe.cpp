#include<iostream>
using namespace std ; 

int sum(int num1 , int num2) 
{
    int ans  = num1 + num2 ;
    return ans;
}

int mul(int num1 , int num2) 
{
    int ans  = num1 * num2 ;
    return ans;
}

void fun()
{
    cout << "This Is Roy" ;
}

int main() {
    int a , b ; 
    cout << "Enter Your Num :  " ; 
    cin  >> a >> b ; 

    int addition = sum(a,b) ;
    cout << addition << endl;
    /* cout << sum(a,b) << endl; */
    cout << mul(a,b) << endl;
    fun() ;

}
