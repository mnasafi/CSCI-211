#include <iostream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
  string buffer;
  int i=0;

  while (argv[i])
    {
      i++;
      // write the line to standard output
      cout << argv[i] << endl;
    }

}
