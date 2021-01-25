/*
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 6, 2021, 4:38 PM
 * Purpose: Sales Prediction Problem
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
             int   purch; //Price of purchase  
             float stTx,  //State sales tax
                   ctyTx, //County sales tax
                   sumTx, //Sum of state sales tax and county sales tax    
                   ttlTx; //Total sales tax on purchase
               
    
    //Initialize Variables
    purch=95;
    stTx=0.4;
    ctyTx=0.2;
    
    //Map Inputs to Outputs -> Process
    sumTx=(stTx+ctyTx)*purch; //Both divided by 100
    
    //Display the Inputs/Outputs
    cout<<"Total sales tax = " <<sumTx<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}