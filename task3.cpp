#include <iostream>
using namespace std;
string check(string word);
main()
{
    string word;
    string output;
    cout << "Enter any string: ";
    getline (cin , word);
    output=check(word);
    cout<< "Result: " << output;
}
string check(string word)
{
      int count=0;
      string result;
      count=word.length();
      if(count%2==0)
      {
        result="true";
      }
      else
      {
        result="false";
      }
      return result;
  
}