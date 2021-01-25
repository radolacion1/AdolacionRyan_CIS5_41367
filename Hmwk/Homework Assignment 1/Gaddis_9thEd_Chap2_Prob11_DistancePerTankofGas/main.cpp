/*
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 8, 2021, 8:30 PM
 * Purpose: Distance per Tank of Gas 
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
                int   glns;  //Gas tank average
                float twn,   //Miles per gallon in town
                      hwy,   //Miles per gallon on highway
                      dsTwn, //Distance traveled in town
                      dsHwy; //Distance traveled on highway 
               
    //Initialize Variables
    glns=20;
    twn=23.5;
    hwy=28.9;
    
    //Map Inputs to Outputs -> Process
    dsTwn=glns*twn;
    dsHwy=glns*hwy;
    
    //Display the Inputs/Outputs
    cout<<"Distance traveled in town = " <<dsTwn<<endl;
    cout<<"Distance traveled on highway = " <<dsHwy<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}