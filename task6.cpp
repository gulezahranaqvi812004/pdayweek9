#include <iostream>
using namespace std;
main()
{
    int arr_size=3;
    int time;
    cout << "Enter number of times: ";
    cin >> time;
    int number[arr_size];
    int output[arr_size];
    for(int index=0 ; index<arr_size ; index++)
    {
       cout << "Enter an array: ";
       cin >> number[index];
       if(number[index]%2==0)
       {
        output[index]=number[index]-(2*time);
       }
       else
       {
        output[index]=number[index]+(2*time);  
       }
     
    }
      for(int index=0 ; index<arr_size ; index++)
      {
        cout << output[index] << endl;
      } 
}  