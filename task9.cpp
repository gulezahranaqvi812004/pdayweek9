#include <iostream>
using namespace std;

main()

{
   string movie[10]={"Shimmy" , "Shake" , "Pirouette" , "Slide" , "Box Step" , "Headspin", "Dosado" , "Pop", "Lock", "Arabsque"};
   int pin[4];
   int check=0;
   for(int index=0; index<4 ; index++)
   {
    cout << "Enter pincode: ";
    cin >> pin[index];
   }
   
   for(int index=0; index<4 ; index++)
   {  
        
        if(pin[index] == 0 ||  pin[index] == 1 || pin[index] == 2 || pin[index] == 3 || pin[index] == 4 || pin[index] == 5 || pin[index] == 6 || pin[index] == 7 || pin[index] == 8 || pin[index] == 9)
        {
             check=index+pin[index];
        if(check<=9)
        {
           if(check==0)
           {
            cout << movie[0];
            cout << " ";
           } 
           if(check==1)
           {
            cout << movie[1];
            cout << " ";
           }
           else  if(check==2)
           {
            cout << movie[2];
            cout << " ";
           }
           else  if(check==3)
           {
           cout << movie[3];
           cout <<  " ";
           }
           else  if(check==4)
           {
           cout << movie[4];
           cout <<  " ";
           }
           else  if(check==5)
           {
           cout << movie[5];
           cout << " ";
           }
           else  if(check==6)
           {
           cout << movie[6];
           cout <<  " ";
           }
           else  if(check==7)
           {
           cout << movie[7];
           cout << " ";
           }
           else  if(check==8)
           {
           cout << movie[8];
           cout <<  " ";
           }
           else  if(check==9)
           {
           cout << movie[9];
           cout <<  " ";
           } 
         }
         else if(check>9)
        {
         check=check-10;
         cout << movie[check] <<  " ";
        }
        else
        {
          break;
        }
      
      }
       else if (pin[index] != 0 &&  pin[index] != 1 && pin[index] != 2 && pin[index] != 3 && pin[index] != 4 && pin[index] != 5 && pin[index] != 6 && pin[index] != 7 && pin[index] != 8 && pin[index] != 9)
        {
          
          cout << "invalid";
           break;
       }

}
}
