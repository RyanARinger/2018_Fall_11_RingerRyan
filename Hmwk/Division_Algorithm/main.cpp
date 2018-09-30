/* 
 * File:   main.cpp
 * Author: Ryan Ringer
 * Created on September 25th, 2018 2:12pm
 * Purpose:  Number Systems
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int sizefind(int, int);
void divide(int, int, int);
void destroy (int *);
//Program Execution Begins Here
int main(int argc, char** argv) {
    int number, base, size;
    cout << "Enter The number you wish to work with and the base you'd like to convert to :";
    cout << endl << "Number: ";
    cin >> number;
    cout << "Base: ";
    cin >> base;
    size = sizefind(number, base);
    divide(number, base, size);
    return 0;
}
int sizefind (int number, int base){
    int size;
    while(number >= base){
        number /= base;
        size ++;
    }
    return (size + 1);
}
void divide(int number, int base, int size){
    char * a= new char[size];
    char b;
    int asc;
    for(int i=0; i<size-1; i++){
        a[i] = number%base;
        number /= base;
    }
    a[size-1] = number;
    for(int i = size -1; i >= 0; i--){
        if(a[i] > 9){
            b = a[i]-10;
            asc = (int)b;
            asc +=65;
            cout << (char)asc;
        }
        else{
            cout << (int)a[i] << " ";
        }
    }
}
