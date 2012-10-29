#include <iostream>
#include <assert.h>
using namespace std;

bool is_array_sorted(int values[], int size)
{
    assert(size > 0);
    // replace this will the real code...
    return true;

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
