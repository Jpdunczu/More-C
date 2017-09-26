//
//  main.cpp
//  Test
//
//  Created by Joshua Duncan on 2/1/14.
//  Copyright (c) 2014 Joshua Duncan. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r,C,A,V,SA;
    cout <<"Hello, please enter the radius of the circle:";
    cin >> r;
    cout <<"\n";
    cout <<"The circumference of a circle with radius ";
    cout << r;
    cout <<" is: " << endl;
    C=2*3.14*r;
    cout << C;
    cout << endl;
    cout <<"...and the area of the circle is: ";
    A=pow(r,2)*3.14;
    cout << endl;
    cout << A;
    cout << endl;
    cout <<"A sphere with the same radius will have a volume of: ";
    V=pow(r,3)*4*3.14;
    V=V/3;
    cout << endl;
    cout << V;
    cout << endl;
    cout <<"...and that same sphere will have a Surface Area of: ";
    SA=A*4;
    cout << endl;
    cout << SA;
    cout << endl;
    cout <<"Have a nice day!";
    
    
}
/*
 Hello, please enter the radius of the circle:7.5
 
 The circumference of a circle with radius 7.5 is:
 47.1
 ...and the area of the circle is:
 176.625
 A sphere with the same radius will have a volume of:
 1766.25
 ...and that same sphere will have a Surface Area of:
 706.5
 Have a nice day!Program ended with exit code: 0*/
