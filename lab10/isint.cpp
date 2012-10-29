#include <iostream>
#include <ctype.h>
#include <assert.h>
using namespace std;

bool is_int(char str[])
{
    if(str[0]==NULL || !isdigit(str[0]))
      return false;
    if(str[1]==NULL) //if the next spot is the end of the array
      return true;
      
    return is_int(str+1);


}

int main()
{
    char buf[1000];
    cout << "Enter a string: ";
    cin >> buf;

    if (is_int(buf))
      cout << "<" << buf << "> is an integer.\n";
    else cout << "<" << buf << "> is NOT an integer.\n";
}
