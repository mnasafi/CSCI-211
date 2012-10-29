#include <iostream>
#include <assert.h>
using namespace std;

int largest_in_array(int values[], int size)
{
    assert(size > 0);
    // replace this will the real code...
    return 42;

}

int main()
{
    int values[1000];
    int size;
    cout << "Enter integers.  Type control-D when done\n";
    for (size = 0; cin >> values[size]; size++)
      ;
    cout << "The largest value is " << largest_in_array(values, size) << endl;
}
