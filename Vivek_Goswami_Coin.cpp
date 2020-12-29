// Implememtation file for the Coin class
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
#include "Vivek_Goswami_Coin.h"

using namespace std;

Coin::Coin()
{
toss();
}

void Coin::toss()
{

 int value=0;
 value=1+rand()%2;  //Assume 1 for heads and 2 for tails
 if(value==1)
 {
 sideUp="Heads";
 }
 else
 {
  sideUp="Tails";
 }



}
string Coin::getSideUp()
{
return sideUp;

}

