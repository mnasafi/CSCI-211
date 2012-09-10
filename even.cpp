//even.cpp
//elberling, Ace
//elberling


#include <iostream>
using namespace std;

main()
{
  int i, even=1;
  bool q;
  
  while(cin>>i)
  {
    q=i%2;
    
    switch(q)
    {
      case 1:
        //not even
        even=0;
        break;
      case 0:
        //even
        break;
      default:
        cout<<"something went wrong\n";
        break;
    
    }
  }
    if(even==0){ cerr<<"not all even\n";    return 1;}
    else
      cout<<"all even\n";
  
  return 0;  
}


