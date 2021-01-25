/* 
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 18, 2019, 2:45 PM
 * Purpose:  Books
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip> 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
        int bksPur;  //Number of books purchased for the month
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bksPur;
    cout<<"Books purchased =  "<<bksPur<<endl;

    cout<<"Points earned   = ";
        if (bksPur >= 4) {
            cout<<60;
        
    }    else if (bksPur == 0) {
            cout<<0;
            
    }    else if (bksPur == 1) {
            cout<<5;
            
    }    else if (bksPur == 2) {
            cout<<15;
            
    }    else if (bksPur == 3) {
            cout<<30;
    }
    
    
    //Exit stage right or left!
    return 0;
}