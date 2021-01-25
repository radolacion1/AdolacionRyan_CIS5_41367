/* 
 * File:   main.cpp
 * Author: Ryan Adolacion
 * Created on March 18th, 2020, 3:33 PM
 * Purpose: Truth Table for Assignment 4
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

   //Declare Variables
    bool x,y;//Boolean statements represented in the Table
    
    //Initialize Variables
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //1st Row of the Truth Table
    x=y=true;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;
    
    //2nd Row of the Truth Table
    y=false;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;

    
    //3rd Row of the Truth Table
    y=true, x=false;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;

    
    //4th Row of the Truth Table
    y=x=false;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
