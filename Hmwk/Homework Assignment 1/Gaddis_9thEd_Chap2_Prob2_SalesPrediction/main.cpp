/*
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 7, 2021, 6:08 PM
 * Purpose:  Painters Problem
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
              long prct, //Percentage of total sales
                   sls, //Sales this year
                   prd; //Prediction of how much East Coast division will generate
    
    //Initialize Variables
    prct=58;
    sls=86E6;
    
    //Map Inputs to Outputs -> Process
    prd=(prct*sls)/100; //Multiply price percentage and sales this year
                        //Dive the sum by 100
    
    //Display the Inputs/Outputs
    cout<<"East Coast division predicted profit = "<<prd<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}