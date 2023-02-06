#include <iostream>
using namespace std;
main()
{
    int arr_size=4;
    string character[arr_size];
    for(int index=0 ; index<4 ; index++)
    {
        cout << "Enter any character: ";
        getline (cin , character[index]);
        
    }
    if(character[0]==character[1] && character[0]==character[2] && character[0]==character[2] && character[0]==character[3])
        {
            cout << "true";
        }
        else
        {
            cout << "False";
        }
}