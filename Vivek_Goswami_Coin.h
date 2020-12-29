// Specification file for the Coin class
#ifndef COIN_H
#define COIN_H
#include <string>

using namespace std;

class Coin
{
public:
Coin();
void toss();
string getSideUp();



private:
string sideUp;
};


#endif
