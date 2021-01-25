/* 
 * File:   main.cpp
 * Author: Ryan Adolacion
 * Created on March 18th, 2020, 3:33 PM
 * Purpose: Menu for Assignment 3 Homework
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

    //Display Menu
    cout<<"Menu for Assignment 3 Homework"<<endl;
    cout<<"Type 1 for Gaddis Sort Names Problem"<<endl;
    cout<<"Type 2 for Gaddis Books Problem"<<endl;
    cout<<"Type 3 for Gaddis Bank Charges Problem"<<endl;
    cout<<"Type 4 for Gaddis ISP Problem"<<endl;
    cout<<"Type 5 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 6 for Savitch Roman Conversion Problem"<<endl;
    cout<<"Type 7 for Savitch Compatible Signs Problem"<<endl;
    cout<<"Type 8 for Gaddos Race Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':
            //Declare Variables
            { string nm1,  //Name 1
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
            }
            //Exit stage right!
            break;
            
        case '2':
            //Declare Variables
            int bksPur;  //Number of books purchased for the month

            //Initialize or input i.e. set variable values

            //Map inputs -> outputs

            //Display the outputs
            cout<<"Book Worm Points"<<endl;
            cout<<"Input the number of books purchased this month."<<endl;
            cin>>bksPur;
            cout<<"Books purchased =  "<<bksPur<<endl;

            cout<<"Points earned   = ";
                if (bksPur >= 4) {
                    cout<<60;

            }    else if (bksPur == 0) {
                    cout<<0;

            }    else if (bksPur == 1) {
                    cout<<5;

            }    else if (bksPur == 2) {
                    cout<<15;

            }    else if (bksPur == 3) {
                    cout<<30;
            }
            //Exit stage right!
            break;
            
        case '3':
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
            //Exit stage right!
            break;
        
        case '4':
            //Declare Variables
            {    string pckg;   //Package
                float  time,   //Time
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
            }        
                //Exit stage right!
                break;
                
        case '5':
            //Declare Variables
            {   string  r="r",   //Rock
                       R="R",   //Rock
                       s="s",   //Scissors
                       S="S",   //Scissors
                       p="p",   //Paper
                       P="P",   //Paper
                       plyr1,   //Choice for player 1
                       plyr2;   //Choice for player 2


            //Initialize or input i.e. set variable values
            cout<<"Rock Paper Scissors Game"<<endl;
            cout<<"Input Player 1 and Player 2 Choices"<<endl;
            cin>>plyr1;
            cin>>plyr2;

            //Map inputs -> outputs

            //Display the outputs
            if (plyr1==r || plyr1==R) {
                if (plyr2==p || plyr2==P) {
                    cout<<"Paper covers rock.";
                }else if(plyr2==s || plyr2==S) {
                    cout<<"Rock breaks scissors.";
                }else if (plyr1==r && plyr2==R) {
                    cout<<"Nobody wins";
                }
            }else if (plyr1==p || plyr1==P) {
                if (plyr2==r || plyr2==R) {
                    cout<<"Paper covers rock.";
                }else if (plyr2==s || plyr2==S) {
                    cout<<"Scissors cuts paper.";
                }else if(plyr1==P && plyr2==P) {
                    cout<<"Nobody wins";
                }
            }else if (plyr1==s || plyr1==S) {
                if (plyr2==p || plyr2==P) {
                    cout<<"Scissors cuts paper.";
                }else if(plyr2==r || plyr2==R) {
                    cout<<"Rock breaks scissors.";
                }else if (plyr1==s && plyr2==S) {
                    cout<<"Nobody wins";
                }
            }
            }
            //Exit stage right!
            break;
            
        case '6':
            //Declare Variables
            unsigned short numCnvr; 
            unsigned char    n1000, n100, n10, n1;


            //Initialize or input i.e. set variable values
            cout<<"Arabic to Roman numeral conversion."<<endl;
            cout<<"Input the integer to convert."<<endl;
            cin>>numCnvr;

            if (numCnvr>=1000 && numCnvr<=3000){
                cout<<numCnvr<<" is equal to ";


            //Map inputs -> outputs

                n1000=numCnvr/1000;
                n100=numCnvr%1000/100;
                n10=numCnvr%100/10;
                n1=numCnvr%10;

                cout<<(n1000==3?"MMM":
                       n1000==2?"MM":
                       n1000==1?"M":"");

                cout<<(n100==9?"CM":
                       n100==8?"DCCC":
                       n100==7?"DCC":
                       n100==6?"DC":
                       n100==5?"D":
                       n100==4?"CD":
                       n100==3?"CCC":
                       n100==2?"CC":
                       n100==1?"C":"");

                cout<<(n10==9?"XC":
                       n10==8?"LXXX":
                       n10==7?"LXX":
                       n10==6?"LX":
                       n10==5?"L":
                       n10==4?"XL":
                       n10==3?"XXX":
                       n10==2?"XX":
                       n10==1?"X":"");

                cout<<(n1==9?"IX":
                       n1==8?"VIII":
                       n1==7?"VII":
                       n1==6?"VI":
                       n1==5?"V":
                       n1==4?"IV":
                       n1==3?"III":
                       n1==2?"II":
                       n1==1?"I":"");



            //Display the outputs
            } else {
                cout<<numCnvr<<" is Out of Range!";
            }
            //Exit stage right!
                break;
           
        case '7':
           //Declare Variables
            {   string      z1,    //Zodiak 1
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
            }
        
            //Exit stage right!
            break;
         case '8':
            {string runner_1,
           runner_2,
           runner_3;
    
    

    unsigned short runner_1_time,
        runner_2_time,
        runner_3_time;

    
    cout << "Race Ranking Program" <<endl;
    cout << "Input 3 Runners" <<endl;
    cout << "Their names, then their times" <<endl;
    cin>>runner_1;
    cin>>runner_1_time;
    cin>>runner_2;
    cin>>runner_2_time;
    cin>>runner_3;
    cin>>runner_3_time;
    
    if (runner_1_time < 0 || 
        runner_2_time < 0 || 
        runner_3_time < 0)
    {
        cout << "Error. Runner times must be\n"
             << "0 or greater.\n"
             << "Rerun the program and try again." 
             << endl;
    }
    else
    {
        if (runner_1_time < runner_2_time)
        {
            if (runner_1_time < runner_3_time)
            {
                cout<<runner_1<<"\t"<<setw(3)
                     << runner_1_time 
                     << endl;
                if (runner_2_time < runner_3_time)
                {
                    cout<<runner_2<<"\t"<<setw(3)
                         << runner_2_time 
                         << endl;
                    cout<<runner_3<<"\t"<<setw(3) 
                         << runner_3_time 
                         << endl;
                }
                else
                {
                    cout<< runner_3<<"\t"<<setw(3) 
                         << runner_3_time 
                         << endl;
                    cout<< runner_2<<"\t"<<setw(3) 
                         << runner_2_time; 
                         
                }
            }
        }
        if (runner_2_time < runner_3_time)
        {
            if (runner_2_time < runner_1_time)
            {
                cout 
                     << runner_2<<"\t"<<setw(3)
                     << runner_2_time 
                     << endl;
                if (runner_1_time < runner_3_time)
                {
                    cout 
                         << runner_1<<"\t"<<setw(3)
                         << runner_1_time 
                         << endl;
                    cout 
                         << runner_3<<"\t"<<setw(3)
                         << runner_3_time 
                         << endl;
                }
                else
                {
                    cout 
                         << runner_3<<"\t"<<setw(3)
                         << runner_3_time 
                         << endl;
                    cout 
                         << runner_1<<"\t"<<setw(3) 
                         << runner_1_time; 
                        
                }
            }
        }
        
        if (runner_3_time<runner_2_time)
        {
            if (runner_3_time<runner_1_time)
            {
                cout<<runner_3<<"\t"<<setw(3)<<runner_3_time<<endl;
                
                if (runner_1_time<runner_2_time)
                {
                    cout<<runner_1<<"\t"<<setw(3)<<runner_1_time<< endl;
                    cout<<runner_2<<"\t"<<setw(3)<<runner_2_time; 
                       
                }
                else
                {
                    cout<<runner_2<<"\t"<<setw(3)<<runner_2_time; 
                    cout<<runner_1<<"\t"<<setw(3)<<runner_1_time; 
                         
                }
            }
        }
    }
}
            


            //Exit stage right!
            break;
            
        default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}