#include <iostream>
#include <ctype.h>
#include <assert.h>
using namespace std;

bool is_int(char str[])
{
    
    return true;

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
