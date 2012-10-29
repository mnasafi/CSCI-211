#include <iostream>
#include <assert.h>
using namespace std;

bool is_array_sorted(int values[], int size)
{
    assert(size > 0);
    if(size == 1)
      return true;
    
    return (values[0]<=values[1] && is_array_sorted(values+1, size-1));

}

int main()
{
    int values[1000];
    int size;
    cout << "Enter integers.  Type control-D when done\n";
    for (size = 0; cin >> values[size]; size++)
      ;
    if (is_array_sorted(values, size))
      cout << "The values you entered ARE sorted\n";
    else cout << "The values you entered ARE NOT sorted\n";
}
