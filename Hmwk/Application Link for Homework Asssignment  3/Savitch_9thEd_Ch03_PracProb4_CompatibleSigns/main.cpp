/* 
 * File:   main.cpp
 * Author: Ryan Adolacion
 * Created on January 17, 2021, 5:50 PM
 * Purpose:  Compatible Signs
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
        string      z1,    //Zodiak 1
                    z2;     //Zodiak 2
    
        int         h1,    //Horoscope 1
                    h2;    //Horoscope 2
             
   
             
    
    //Initialize Variables
    
     
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
    cin>>z1;
    if(z1=="Aries"){h1=1;}
    if(z1=="Leo"){h1=1;}
    if(z1=="Sagittarius"){h1=1;}
    if(z1=="Taurus"){h1=2;}
    if(z1=="Virgo"){h1=2;}
    if(z1=="Capricorn"){h1=2;}
    if(z1=="Gemini"){h1=3;}
    if(z1=="Libra"){h1=3;}
    if(z1=="Aquarius"){h1=3;}
    if(z1=="Cancer"){h1=4;}   
    if(z1=="Scorpio"){h1=4;}    
    if(z1=="Pisces"){h1=4;}
    
    cin>>z2;
    if(z2=="Aries"){h2=5;}
    if(z2=="Leo"){h2=5;}
    if(z2=="Sagittarius"){h2=5;}
    if(z2=="Taurus"){h2=6;}
    if(z2=="Virgo"){h2=6;}
    if(z2=="Capricorn"){h2=6;}
    if(z2=="Gemini"){h2=7;}
    if(z2=="Libra"){h2=7;}
    if(z2=="Aquarius"){h2=7;}
    if(z2=="Cancer"){h2=8;}   
    if(z2=="Scorpio"){h2=8;}    
    if(z2=="Pisces"){h2=8;}
     
    switch (h1){
        case 1:
            if (h2==5){
            cout<<z1<<" and "<<z2<<" are compatible Fire signs.";
            }else {
            cout<<z1<<" and "<<z2<<" are not compatible signs.";
            }break;
        case 2:if (h2==6){
            cout<<z1<<" and "<<z2<<" are compatible Earth signs.";
            }else {
            cout<<z1<<" and "<<z2<<" are not compatible signs.";
            }break;
        case 3:if (h2==7){
            cout<<z1<<" and "<<z2<<" are compatible Earth signs.";
            }else {
            cout<<z1<<" and "<<z2<<" are not compatible signs.";
            }break;
        case 4:if (h2==8){
            cout<<z1<<" and "<<z2<<" are compatible Water signs.";
            }else {
            cout<<z1<<" and "<<z2<<" are not compatible signs.";
            }break;
    }
      
    
    //Exit the Program - Cleanup
    return 0;
}