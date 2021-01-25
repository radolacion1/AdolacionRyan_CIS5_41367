/* 
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 18, 2019, 3:30 PM
 * Purpose:  Sort Names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
         
    //Declare Variables
    string nm1,  //Name 1
           nm2,  //Name 2
           nm3;  //Name 3
    
                  
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>nm1;
    cin>>nm2;
    cin>>nm3;
            
    //Display the outputs
    if (nm1>nm2 && nm2>nm3) {
        cout<<nm3<<endl;
        cout<<nm2<<endl;
        cout<<nm1;
        
    } else if(nm1>nm3 && nm3>nm2) {
        cout<<nm2<<endl;
        cout<<nm3<<endl;
        cout<<nm1;
        
    } else if(nm2>nm1 && nm1>nm3) {
        cout<<nm3<<endl;
        cout<<nm1<<endl;
        cout<<nm2;
        
    } else if(nm2>nm3 && nm3>nm1) {
        cout<<nm1<<endl;
        cout<<nm3<<endl;
        cout<<nm2;
        
    }else if(nm3>nm2 && nm2>nm1) {
        cout<<nm1<<endl;
        cout<<nm2<<endl;
        cout<<nm3;
        
    }else if(nm3>nm1 && nm1>nm2) {
        cout<<nm2<<endl;
        cout<<nm1<<endl;
        cout<<nm3;
    }
    //Exit stage right or left!
    
    return 0;
}