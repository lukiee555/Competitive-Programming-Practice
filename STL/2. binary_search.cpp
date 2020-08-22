#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 40, 40, 50, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    bool present = binary_search(arr, arr + n, key);
    if (present)
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;

    /* The lower_bound() method in C++ is used to return an iterator pointing to the first element in the range 
    [first, last) which has a value not less than val. This means that the function returns the index of the next 
    smallest number just greater than or equal to that number. If there are multiple values that are equal to val, 
    lower_bound() returns the index of the first such value. */

    auto lb = lower_bound(arr, arr + n, 40);
    cout << "Lower Bound of 40 is " << (lb - arr) << endl;

    /* The upper_bound It returns an iterator pointing to the first element in the range [first, last) that 
    is greater than value, or last if no such element is found. The elements in the range shall already be 
    sorted or at least partitioned with respect to val. */
    
    auto ub = upper_bound(arr, arr + n, 40);
    cout << "Upper Bound of 40 is " << (ub - arr) << endl;

    cout << "Frequency of 40 is " << (ub - lb) << endl;
    return 0;
}
