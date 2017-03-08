//
//  main.cpp
//  Unit_4_Program
//
//  Created by Kartapurkh Estlund on 3/2/17.
//  Copyright © 2017 Bibi Khalsa Estlund. All rights reserved.
//
//
// A program to calculate if an integer between 1 and 1000 is prime or not.

#include <iostream>
#include <string>

using namespace std;

void reset(int&, char&, string);

int main() {
    
    int integer;
    char choice;
    
START:
    
    cout << "Please input a positive integer between 1 and 1,000:  ";
    
    cin >> integer;
    
    if (!cin)
    {// Input validation. Handles input failure.
        reset(integer, choice, "\n Check input. Please try again.\n\n");
        goto START;
    }
    
    else if (integer <= 1 || integer > 1000)
    {reset(integer, choice, "\n Integer must be between 1 and 1000. Please try again.\n\n");
        goto START;
        
    }
    
    
     //calculating to see if integer is prime. Notifying user of results.
    else if (integer == 2 || integer == 3 || integer == 5 || integer == 7 || integer == 11 || integer == 13 || integer == 17 || integer == 19 || integer == 23 || integer == 29 || integer == 31)
    
    {cout << "\n\n" << integer << " is prime.";
        goto END;}


   
    else if((integer % 2 == 0) || (integer % 3 == 0) || (integer % 5 == 0) || (integer % 7 == 0) || (integer % 11 == 0) || (integer % 13 == 0) || (integer % 17 == 0) || (integer % 19 == 0) || (integer % 23 == 0) || (integer % 29 == 0) || (integer % 31 == 0))
    
    {cout << "\n\n" << integer << " is not prime.\n\nIt is divisible by the following prime numbers: \n\n";}
    
    
    else
    {cout << integer << " is prime.\n\n\n";}
    
    
    //outputting prime numbers that can divide integer.
    if (integer % 2 == 0)
        {cout << 2<< " ";}
    
    if (integer % 3 == 0)
        {cout << 3 << " ";}
        
    if (integer % 5 == 0)
        {cout << 5<< " ";}
        
    if (integer % 7 == 0)
        {cout << 7 << " ";}
        
    if (integer % 11 == 0)
        {cout << 11 << " ";}
        
    if (integer % 13 == 0)
        {cout << 13 << " ";}
        
    if (integer % 17 == 0)
        {cout << 17 << " ";}
        
    if (integer % 19 == 0)
        {cout << 19 << " ";}
        
    if (integer % 23 == 0)
        {cout << 23 << " ";}
        
    if (integer % 29 == 0)
        {cout << 29 << " ";}
        
    if (integer % 31 == 0)
    {cout << 31 << " ";}
    

END:
    cout << "\n\n\n\n";
    
    cout << "\n\nWould you like to try again? ( y | n ): ";
    cin >> choice;



     if (toupper(choice) == 'Y')
    { // repeat program as necessary
        reset(integer, choice,"\n\nRESETTING PROGRAM\n\n");
        goto START;
    }
    
  
    return 0;
}

void reset(int &integer,char &choice,string msg)
{ // clears values and notifies user of input validation
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    integer = NULL;
    choice = NULL;
    cout << msg;
    
}
