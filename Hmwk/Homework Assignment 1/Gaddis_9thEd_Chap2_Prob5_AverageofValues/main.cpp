/*
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 8, 2021, 730 PM
 * Purpose:  Average of Values
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
               int op1, //One of five variables
                   op2, //One of five variables
                   op3, //One of five variables
                   op4, //One of five variables
                   op5, //One of five variables
                   sum, //Sum of the five variables
                   avg; //Average of the five variables  
        
    //Initialize Variables
    op1=28;
    op2=32;
    op3=37;
    op4=24;
    op5=33;
          
    //Map Inputs to Outputs -> Process
    sum=op1+op2+op3+op4+op5;
    avg=sum/5+1;
    
    //Display the Inputs/Outputs
    cout<<"Sum of five variables = "<<sum<<endl;
    cout<<"Average of five variables = "<<avg<<endl;
      
    //Exit the Program - Cleanup
    return 0;
}