//Application Program
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "Vivek_Goswami_Coin.h"


using namespace std;

int main()
{
srand(time(0));

Coin quarter;
Coin dime;
Coin nickel;

double playerBalance=0,compBalance=0;
int i=1;
string playerSideUp,compSideUp;

            //start game
cout << "Your starting balance is $" << fixed << setprecision(2) << playerBalance << endl;
cout << "The computer's starting balance is $" << fixed << setprecision(2) << compBalance << endl;
cout << endl;

while(playerBalance<1 && compBalance<1)
{
  //PLAYER TOSSES

    //quarter toss
 quarter.toss();
 playerSideUp=quarter.getSideUp();   //save player's quarter toss to playerSideUp

 if(playerSideUp=="Heads")
 {
  playerBalance+=0.25;
 }
 else
 {
  playerBalance+=0.00;
 }

   //dime toss
 dime.toss();
 playerSideUp=dime.getSideUp();    //save player's dime toss to playerSideUp

 if(playerSideUp=="Heads")
 {
  playerBalance+=0.10;
 }
 else
 {
  playerBalance+=0.00;
 }

   //nickel toss
  nickel.toss();
 playerSideUp=nickel.getSideUp();   //save player's nickel toss to playerSideUp

 if(playerSideUp=="Heads")
 {
  playerBalance+=0.05;
 }
 else
 {
  playerBalance+=0.00;
 }


 //COMPUTER TOSSES

    //quarter toss
 quarter.toss();
 compSideUp=quarter.getSideUp();  //save comp's quarter toss to compSideUp

 if(compSideUp=="Heads")
 {
  compBalance+=0.25;
 }
 else
 {
  compBalance+=0.00;
 }

   //dime toss
 dime.toss();
 compSideUp=dime.getSideUp();  //save comp's dime toss to compSideUp

 if(compSideUp=="Heads")
 {
  compBalance+=0.10;
 }
 else
 {
  compBalance+=0.00;
 }

   //nickel toss
  nickel.toss();
 compSideUp=nickel.getSideUp();  //save comp's nickel toss to compSideUp

 if(compSideUp=="Heads")
 {
  compBalance+=0.05;
 }
 else
 {
  compBalance+=0.00;
 }
            //display the balance after each round
 cout << "Your balance after Round " << i << ": $" << playerBalance << endl;
 cout << "The computer's balance after Round " << i << ": $" << compBalance << endl;
 cout << endl;

 i++;
}
            //display the ending balance
cout << "Your ending balance: " << playerBalance << endl;
cout << "The computer's ending balance: " << compBalance << endl;
cout << endl;




          //decide who wins
if(playerBalance==compBalance)
{
 cout << "Tie! Nobody wins." << endl << endl;
}
else if(playerBalance<1.00 && compBalance>=1.00)
{
 cout << "Sorry! The computer won. " << endl;
}
else if(playerBalance>=1.00 && compBalance<1.00)
{
 cout << "Congratulations! You won. " << endl;
}
else if(playerBalance>=1.00 && compBalance>=1.00)
{
 if(playerBalance>compBalance)
 {
  cout << "Sorry! The computer won. " << endl;
 }
 else if(playerBalance<compBalance)
 {
  cout << "Congratulations! You won. " << endl;
 }
}







return 0;
}
