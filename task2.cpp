#include <iostream>
using namespace std;
main()
{
  string movie[5]={"Gladiators" , "StarWars" , "Terminator" , "TakingLives" , "TombRider"};
  float price=500.0;
  float output=0;
  string input;
  float discount=0;
  cout << "Enter name of the movie: ";
  cin >> input;
 
    if(input== movie[0]|| input==movie[2] || input==movie[4])
    {
        discount=0.1*price;
    }
    else
    {
        discount=0.05*price;
    }
 
   output=price-discount;
   cout << "Discounted Amonut: " << output;
}