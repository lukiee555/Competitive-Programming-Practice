#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

/*
char *strtok(char *s, char *delimiters)
return a token on each subsequent call
on the first call function should be passed with string argument for 's'
on subsequent calls we should pass string argument as null
*/

int main()
{
    char s[100] = "Let's play cricket";
    //points to the first given string
    char *ptr = strtok(s, " ");
    //output :-- Let's
    //will give the same output
    cout << ptr << endl;
    ptr = strtok(s, " ");
    //output :-- Let's
    cout << ptr << endl;
    //strtok maintains static varible to memorize till when it yet tokenized
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        //now it will give output as "play"
        cout << ptr << endl;
    }
    ptr = strtok(NULL, " ");
    //now it will give output as "play"
    cout << ptr << endl;
    return 0;
}
