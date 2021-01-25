/*
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 7, 2021, 6:30 PM
 * Purpose:  Land Calculation Problem
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
               int acre, //One Acre of Land
                   tract, //Tract of Land
                   numAcre; //Number of Acres in a Tract of Land
        
    //Initialize Variables
    acre=43560;
    tract=391876;
    
    //Map Inputs to Outputs -> Process
    numAcre=tract/acre+1; //Number of Acres in a Tact of Land 
    
    //Display the Inputs/Outputs
      cout<<"The number of acres in a tract of land with 391876^ft2 = " <<numAcre << " acres"<<endl;
      
    //Exit the Program - Cleanup
    return 0;
}