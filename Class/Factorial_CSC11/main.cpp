/* 
 * File:   main.cpp
 * Author: Ryan Ringer
 * Created on September 26, 2018, 10:30 AM
 * Purpose:  File Head
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
unsigned long fact(unsigned long);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned long n, ans;
    //Input or initialize values Here
    cout << "Enter an integer : ";
    cin >> n;
    //Process/Calculations Here
    ans = fact(n);
    //Output Located Here
    cout << ans << endl;
    //Exit
    
    return 0;
}
unsigned long fact(unsigned long n){
    if(n <= 0){
        return 1;
    }
    return n * fact(n-1);
}