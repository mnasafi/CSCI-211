#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

bool legal_int(char *str)
{
    for(int temp=0; str[temp]!=0;temp++)
    {
      if (isdigit(str[temp]))
        return true;
    }
        return false;
    
}


int main(int argc, char *argv[])
{
  string buffer;
  int i=1, value=0;

  if (argc < 1)
  {
    cerr << "Error:illegal integer./n";
    return 1;
  }

  while (argv[i])
    {
      if(legal_int(argv[i]))
      {
        value = atoi(argv[i]) + value;
        i++;
      }else
         cerr<< "Error: illegal integer.\n";
 
    }
  
  cout <<value<<endl;

  return 0;
}
