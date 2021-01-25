/*
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 8, 2021, 8:08 PM
 * Purpose: MPG
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
               int gllns, //Amount of gallons car holds
                   mls,   //Amount of miles car can travel before refueling
                   mpg;   //Miles per gallon
    
    //Initialize Variables
    gllns=15;
    mls=375;
    
    //Map Inputs to Outputs -> Process
    mpg=mls/gllns;
    
    //Display the Inputs/Outputs
    cout<<"Number of miles per gallon = " <<mpg<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}