#include <iostream>
using namespace std;
main()
{
    bool check=false;
    int arr_size=0;
    int output=0;
    int next;
    cout << "Enter arry size: ";
    cin >> arr_size;
    int number[arr_size];
    for(int index=0 ; index<arr_size ; index++)
    {
    cout << "Enter an array: ";
    cin >> number[index];
    }
    for(int index=0 ; index<arr_size ; index++)
    {
       while(number[index]%10 != 0)
       {
        if(number[index]%10 == 7)
        {
            check= true;
            break;
        }
            number[index]=number[index]/10;
       }
       if(number[index]%10 == 0)
       {
         while(number[index] != 0 )
         {
    
            if(number[index]%10 == 7)
            {
                check= true;
                break; 
            }
            number[index]=number[index]/10;
         }  
       }

     
    }

    if(check==true)
    {
      cout << "Boom";
    }
    else
    {
        cout << "There is no 7 in this array";
    }
   
    }
  