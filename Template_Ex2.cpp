/*Create the C++ Function Template named multiples so that it has
three parameters sum, x, and n.  The first two parameters will have
the type represented by the function template type parameter WhatKind.
n will always be int.  The return type is void.  All parameters are
passed by value except for sum which is passed by reference.  A
Template Function created from multiples will compute...

        sum = 1 + x + 2x + 3x + ... + nx*/
        
#include<iostream>
using namespace std;

template <typename X,typename Y>void multiples(X& sum,X x,Y n){
    for(int i=1; i<=n; i++){
        sum=i*x;
        cout<<sum<<"\t";
    }
}
int main(){
    int rge,div,sum = 0;
    cout<<"\nEnter the divisor and range ";
    cin>>div>>rge;  
    multiples(sum,div,rge);
}