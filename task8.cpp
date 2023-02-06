#include <iostream>
using namespace std;
main()
{
    int arr_size;
    int time=0;
    int count=0;
    int total;
    int next=0;
    cout << "Enter arry size: ";
    cin >> arr_size;
    string color[arr_size];
    time=arr_size*2;
    for(int index=0 ; index<arr_size ; index++)
    {
        cout << "Enter color:";
        cin >> color[index];
    }
    for(int index=0 ; index<arr_size ; index++)
    {
        next=index+1;
        if(color[index] != color[next])
        {
                count=count+1;
                
        }
    }
    total=(time+count)-1;
    cout << "Total time: " << total;





}