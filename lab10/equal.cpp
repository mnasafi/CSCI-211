#include <iostream>
using namespace std;

bool equal_string(const char str1[], const char str2[])
{

  if(str1[0] == NULL && str2[0]==NULL)
     return true;
  else if (str1[0] == str2[0])
    return equal_string(str1+1, str2+1);
  else
    return false;

}

int main()
{
    char str1[1000], str2[1000];

    cout << "enter first string: ";
    cin >> str1;
    cout << "enter second string: ";
    cin >> str2;

    if (equal_string(str1, str2))
      cout << "<" << str1 << "> is equal to <" << str2 << ">\n";
    else cout << "<" << str1 << "> is NOT equal to <" << str2 << ">\n";
}
