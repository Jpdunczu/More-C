//
//  main.cpp
//  Change Calculator
//
//  Created by Joshua Duncan on 2/1/14.
//  Copyright (c) 2014 Joshua Duncan. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int abe,thomas,frank,george,washington,lincoln,hamilton,jackson,grant,benjamin;
double moneyDue,moneyPaid,moneyOwed;

int main(){
    cout <<"Hello, I am going to help you give the correct amount of change" << endl;
    cout <<"first, enter the amount of money that is due: " << endl;
    cin >> moneyDue;
    cout << endl;
    cout <<"great! now enter in the amount that is being paid: " << endl;
    cin >> moneyPaid;
    cout << endl;
    
    if (moneyDue<moneyPaid)
    {
        moneyOwed=moneyDue-moneyPaid;
        cout <<"ok, we owe them: ";
        cout << -moneyOwed << endl;
    }
    
    if (moneyDue>moneyPaid)
    {
        moneyOwed=moneyDue-moneyPaid;
        cout <<"Ok, they still owe us: " << endl;
        cout << moneyOwed << endl;
        cout <<"enter in amount paid: " << endl;
        cin >> moneyPaid;
        
        while (moneyOwed>moneyPaid)
        {
            moneyOwed=moneyOwed-moneyPaid;
            cout <<"They still owe us: " << endl;
            cout << moneyOwed << endl;
            cout <<"enter in amount paid: " << endl;
            cin >> moneyPaid;
            
                if (moneyOwed<moneyPaid)
                    moneyOwed=moneyOwed-moneyPaid;
                    cout <<"ok, we owe them: ";
                    cout << -moneyOwed << endl;
        }
    }
    
    if (moneyOwed>0)
    {
        moneyOwed=-moneyOwed;
    }
        else
        {
            moneyOwed=moneyOwed;
        }
    
    //Note:  The variable "moneyOwed" is a double value and i'm intentionally putting it into an integer variable in order to truncate the value for the sake of only dealing with whole numbers for the final output.
    
        benjamin=-moneyOwed/100.00;
        cout << "Give them: " << endl;
        cout << benjamin;
        cout << " $100 bills" << endl;
        
        grant=(-moneyOwed-(benjamin*100))/50.00;
        cout << grant;
        cout <<" $50 bills" << endl;
        
        jackson=(-moneyOwed-(benjamin*100)-(grant*50))/20.00;
        cout << jackson;
        cout <<" $20 bills" << endl;
        
        hamilton=(-moneyOwed-(benjamin*100)-(grant*50)-(jackson*20))/10.00;
        cout << hamilton;
        cout <<" $10 bills" << endl;
        
        lincoln=(-moneyOwed-(benjamin*100)-(grant*50)-(jackson*20)-(hamilton*10))/5.00;
        cout << lincoln;
        cout <<" $5 bills" << endl;
        
        washington=(-moneyOwed-(benjamin*100)-(grant*50)-(jackson*20)-(hamilton*10)-(lincoln*5))/1.00;
        cout << washington;
        cout <<" $1 bills" << endl;
        
        george=(-moneyOwed-(benjamin*100)-(grant*50)-(jackson*20)-(hamilton*10)-(lincoln*5)-washington)/.25;
        cout << george;
        cout <<" Quarters..";
        
        frank=(-moneyOwed-(benjamin*100)-(grant*50)-(jackson*20)-(hamilton*10)-(lincoln*5)-washington-(george*.25))/.10;
        cout << frank;
        cout <<" Dimes..";
        
        thomas=(-moneyOwed-(benjamin*100)-(grant*50)-(jackson*20)-(hamilton*10)-(lincoln*5)-washington-(george*.25)-(frank*.10))/.05;
        cout << thomas;
        cout <<" Nickels..";
        
        abe=(-moneyOwed-(benjamin*100)-(grant*50)-(jackson*20)-(hamilton*10)-(lincoln*5)-washington-(george*.25)-(frank*.10)-(thomas*.05))/.01;
        cout << abe;
        cout <<" Pennies.";
}

    //First an example of someone paying more than what is due
    /*
     Hello, I am going to help you give the correct amount of change
     first, enter the amount of money that is due:
     217.63
     
     great! now enter in the amount that is being paid:
     500
     
     ok, we owe them: 282.37
     Give them:
     2 $100 bills
     1 $50 bills
     1 $20 bills
     1 $10 bills
     0 $5 bills
     2 $1 bills
     1 Quarters..1 Dimes..0 Nickels..2 Pennies.Program ended with exit code: 0
    */
    
    //Next an example of someone not paying enough, and then finnaly paying more than the remainder due
    /*
     Hello, I am going to help you give the correct amount of change
     first, enter the amount of money that is due:
     12.29
     
     great! now enter in the amount that is being paid:
     12
     
     Ok, they still owe us:
     0.29
     enter in amount paid:
     .20
     They still owe us:
     0.09
     enter in amount paid:
     .50
     ok, we owe them: 0.41
     Give them:
     0 $100 bills
     0 $50 bills
     0 $20 bills
     0 $10 bills
     0 $5 bills
     0 $1 bills
     1 Quarters..1 Dimes..1 Nickels..1 Pennies.Program ended with exit code: 0   */
    

