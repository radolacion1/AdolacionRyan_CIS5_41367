/* 
 * File:   main.cpp
 * Author: Ryan R. Adolacion
 * Created on January 18, 2019, 3:00 PM
 * Purpose:  Bank Charges
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
         
    //Declare Variables
    float begBal,
          numChk,
          chckFee,
          monFee,
          newBal,
          lowBal;
                  
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>begBal>>numChk;
    
    //Map inputs -> outputs
    if (numChk<0) 
    {
        cout<<"Number of checks inputted is invalid.";
    }
    else if (numChk>0)
    {
        
    if (begBal<0)
   
    {
        cout<<"Account is overdrawn.";
    }
    else if (begBal>0)
    {
            if (0<=numChk&&numChk<20)
            chckFee=numChk*0.10f;

            else if (20<=numChk&&numChk<=39)
            chckFee=numChk*0.08f;
            
            else if (40<=numChk&&numChk<=59)
            chckFee=numChk*0.06f;
     
            else if (numChk>59)
            chckFee=numChk*0.04f;
            
            monFee=10;
            begBal<400?lowBal=15.00:lowBal=0.00;
            newBal=begBal-chckFee-monFee-lowBal;
            
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $ "<<setw(8)<<begBal<<endl;
    cout<<"Check Fee   $ "<<setw(8)<<chckFee<<endl;
    cout<<"Monthly Fee $ "<<setw(8)<<monFee<<endl;
    cout<<"Low Balance $ "<<setw(8)<<lowBal<<endl;
    cout<<"New Balance $ "<<setw(8)<<newBal;
    }
    }
    //Exit stage right or left!
    
    return 0;
}