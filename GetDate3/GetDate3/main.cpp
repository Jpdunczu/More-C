//
//  main.cpp
//  GetDate3
//
//  Created by Joshua Duncan on 5/5/14.
//  Copyright (c) 2014 Joshua Duncan. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

string date,month;
int day, year;

void getDate(int dptr,string mptr, int yptr){
    ostringstream ostr;
    ostr<<dptr<<" "<<mptr<<" "<<yptr;
    cout<<ostr.str();
}

void checkDate(string y){
    istringstream istr(y);
    istr>>day>>month>>year;
    getDate(day,month,year);
}

void newdate(string x){
    for (int i=0;i<=x.length();i++){
        if(x[i]=='-'){
            x[i]=' ';
        }
    }
    //cout<<x;
    checkDate(x);
}

int main(){
    cout<<"Enter the date in DD-MMM-YYYY format: ";
    cout<<"for example: 05-APR-2013"<<endl;
    cout<<">>";
    cin>>date;
    newdate(date);
 

}

/*
 Enter the date in DD-MMM-YYYY format: for example: 05-APR-2013
 >>29-MAY-1981
 29 MAY 1981Program ended with exit code: 0
*/
