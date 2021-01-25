/* 
 * File:   main.cpp
 * Author: Ryan Adolacion
 * Created on January 15, 2021, 11:50 PM
 * Purpose:  Average Problem
 *           
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;


//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
                                     // To hold the average
    //Declare Variables
        int books,   //Number of books purchased each month
            points;  //Points awarded depending on the amount of books purchased
   
    //Initialize Variables
        
    // Get the three test scores.
 
    //Map Inputs to Outputs -> Process
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    cout<<"Books purchased =  "<<books<<endl;
    switch(books) 
    {
        case 0:  cout<< "Points earned = 0";
                 break;
        case 1:  cout<< "Points earned = 5";
                 break;
        case 2:  cout<< "Points earned = 15";
                 break;
        case 3:  cout<< "Points earned = 30";
                 break;
        default: cout<< "Points earned = 60";
                 break;
    }
    //Display Inputs/Outputs
            
    //Exit the Program - Cleanup
    return 0;
} 