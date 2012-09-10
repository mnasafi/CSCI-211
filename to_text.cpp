//to_text.cpp
//elberling, Ace
//elberling

//Ace Elberling CSCI-211  to_text.cpp 9/10/2012
//this program 


#include <iostream>
using namespace std;

main()
{
  int i;
  
  while(cin>>i)
  {
    switch(i)
    {
      case 1:
        cout<<"one\n";
        break;
      case 2:
        cout<<"two\n";
        break;
      case 3:
        cout<<"three\n";
        break;
      case 4:
        cout<<"four\n";
        break;
      case 5:
        cout<<"five\n";
        break;
      case 6:
        cout<<"six\n";
        break;
      case 7:
        cout<<"seven\n";
        break;
      case 8:
        cout<<"eight\n";
        break;
      case 9:
        cout<<"nine\n";
        break;
      case 0:
        cout<<"zero\n";
        break;
      default:
        cout<<"number was outside scope\n";
        break;
    
    }
  }
  return 0;  
}


