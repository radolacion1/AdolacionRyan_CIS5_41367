/* 
 * File:   main.cpp
 * Author: Ryan Adolacion
 * Created on January 17, 2021, 10:12 PM
 * Purpose:  Room Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    int maxnumbr; //Maximum occupancy of the room 
    int numbr;    //Number of occupants
    int dif;      
    //Map inputs -> outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>> maxnumbr>> numbr;
    if(numbr>maxnumbr){
        dif=numbr-maxnumbr;
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<dif<<" to avoid fire violation.";
    }
    else if(numbr<=maxnumbr){
        dif=maxnumbr-numbr;
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<dif<<" will be allowed without violation.";


    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}