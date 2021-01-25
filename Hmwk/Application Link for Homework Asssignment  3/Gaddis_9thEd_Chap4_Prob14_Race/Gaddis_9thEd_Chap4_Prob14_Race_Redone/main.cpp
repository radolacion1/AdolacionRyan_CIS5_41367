/* 
 * File:   main.cpp
 * Author: David marquez
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Chapter4 problem 8 sort names
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
   string      runner1,
                runner2,
                runner3;
    unsigned short   time1,
                     time2,
                     time3;
            
    //Initialize Variables
    
    
    //Map Inputs to Outputs -> Process
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>runner1>>time1>>runner2>>time2>>runner3>>time3;
    
    if(time1 <time2 && time2<time3){                      //time 1 is less than time 2 and time 3   1/2/3
         if (time2< time3){                                 //and time2 is less than time 3 
            cout<<runner1<<"\t"<<setw(3)<<time1<<endl<<runner2<<"\t"<<setw(3)<<time2<<endl<<runner3<<"\t"<<setw(3)<<time3;
        }
    
    }if (time2 <time1 && time1< time3){                 //time2 is less than time1 and time 3       2/1/3
        if (time1<time3){                               //and time1 is less than time3 
            cout<<runner2<<"\t"<<setw(3)<<time2<<endl<<runner1<<"\t"<<setw(3)<<time1<<endl<<runner3<<"\t"<<setw(3)<<time3;
        }
    }if (time3< time1 && time1< time2){                 //Time 3 is less than time 1 and time 3 
        if (time1<time2){                               //time 1 is less than time 2                3/1/2
            cout<<runner3<<"\t"<<setw(3)<<time3<<endl<<runner1<<"\t"<<setw(3)<<time1<<endl<<runner2<<"\t"<<setw(3)<<time2;
        }
    }if (time1< time3 && time3< time2){
        if (time3 <time2){                                                                          //1/3/2
            cout<<runner1<<"\t"<<setw(3)<<time1<<endl<<runner3<<"\t"<<setw(3)<<time3<<endl<<runner2<<"\t"<<setw(3)<<time2; 
        }
    }
    if (time2< time3 && time3< time1){                                                             //2/3/1
        if (time3<time1){
            cout<<runner2<<"\t"<<setw(3)<<time2<<endl<<runner3<<"\t"<<setw(3)<<time3<<endl<<runner1<<"\t"<<setw(3)<<time1;
        }
    }
    if (time3< time2 && time2< time1){                                                             //3/2/1
        if (time2<time1){
            cout<<runner3<<"\t"<<setw(3)<<time3<<endl<<runner2<<"\t"<<setw(3)<<time2<<endl<<runner1<<"\t"<<setw(3)<<time1;
        }
    } 
    
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
