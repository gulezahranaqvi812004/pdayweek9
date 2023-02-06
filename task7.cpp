#include <iostream>
using namespace std;
main()
{
    string arr_1;
    string arr_2;
    int arr_size=20;
    int length1=0;
    int length2=0;
    int count=0;
    int index=0;

        cout << "Enter first array: ";
        cin >> arr_1;
        cout << "Enter second array: ";
        cin >> arr_2;
        
       length1=arr_1.length();
       length2=arr_2.length();
        
      while(arr_1[index]!='\0')
      {
        for(int i=0 ; i<length1 ; i++)
        {
        if(arr_1[i]==arr_2[index])
        {
          arr_2[i]='.';
          count++;
        }
        }
        index++;
      }
    
    
       
     cout << count;
}

