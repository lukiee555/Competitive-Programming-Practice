/* Problem Statement
Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, 
and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) 
but if a string is present completely as a prefix in another string, 
then string with longer length should come first. Eg bat, batman are 2 strings and the string 
bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

Input Format
N(integer) followed by N strings.

Constraints
N<=1000

Output Format
N lines each containing one string.

Sample Input
    3
    bat
    apple
    batman

Sample Output
    apple
    batman
    bat
*/

#include <iostream>
#include <algorithm>
using namespace std;

void getinput(string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

bool comparator(string s1, string s2)
{
    int flag = 1;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] != s1[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return s1.length() > s2.length();

    return s1 < s2;
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    getinput(arr, n);
    sort(arr, arr + n, comparator);
    display(arr, n);
    return 0;
}