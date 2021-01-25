/* 
 * File:   main.cpp
 * Author: Ryan Adolacion
 * Created on January 18, 2019, 12:36 PM
 * Purpose:  ISP
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
           string pckg;   //Package
            float time,   //Time
                  price;  //Price
                
    //Initialize or input i.e. set variable values
   
    
    //Map inputs -> outputs
    cout<<"ISP Bill"<<endl;
    cout << "Input Package and Hours" <<endl;
    cin >> pckg;
    
    //Display the outputs
    
        // Package validation
            if ((pckg == "A") || (pckg == "B") || (pckg== "C")) 
                cin >> time;
 
        // Time validation
            if (time <= 744) 
     
        // Package A
            if (pckg == "A") {
            if (time > 10) {
                price = 9.95 + (time - 10) * 2;
            } else {
                    price = 9.95;
            }

        // Package B
            } else if (pckg == "B") {
            if (time > 20) {
                price = 14.95 + (time - 20) * 1;
            } else {
                price = 14.95;
            }

        // Package C
            } else {
            price = 19.95;
            }
            cout << "Bill = $ " << price;
            
    
      //Exit stage right or left!
    return 0;
    
}
