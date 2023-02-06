#include <iostream>
using namespace std;
main()
{
    string input_fruit;
    int quantity;
    int amount=0;
    string fruit[4]={"peach" , "apple" , "guava" , "watermelon"};
    int price[4]={60,70,40,30};
    cout << "Enter name of the fruit: ";
    cin >> input_fruit;
    cout << "Enter quantity: ";
    cin >> quantity;
    for (int index=0 ; index<4 ; index++)
    {
        if(input_fruit == fruit[0])
        {
           amount=quantity*price[0] ;
        }
        else if(input_fruit == fruit[1])
        {
           amount=quantity*price[1] ;
        }
        else if(input_fruit == fruit[2])
        {
           amount=quantity*price[2]; 
        }
        else if(input_fruit == fruit[3])
        {
           amount=quantity*price[3]; 
        }

    }
    cout << "Amount: " << amount;
}