/*
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 12, 2021, 5:08 PM
 * Purpose: Lab Assignment 1 - Budget/Percentage
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
                float milBdgt, //Military Budget
                      fedBdgt, //Federal Budget
                      mlPrcnt; //Military Budget as a Percentage of the Federal Budget        
    
    //Initialize Variables
    milBdgt=7.0e11f; //Military Budget = 700 Billion
    fedBdgt=4.1e12f; //Federal Budget = 4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=(milBdgt/fedBdgt)*100;
    
    
    //Display the Inputs/Outputs
    cout<<"The military budget as a percentage of the federal budget = "<<mlPrcnt<<"%"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}