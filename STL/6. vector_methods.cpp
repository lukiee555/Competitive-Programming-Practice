#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> d{1, 2, 3, 10, 14};
    d.push_back(16);
    for (int i = 0; i < d.size(); i++)
        cout << d[i];
    d.pop_back();
    for (int i = 0; i < d.size(); i++)
        cout << d[i];
    //Insert some element in the middle
    d.insert(d.begin() + 3, 100);
    for (int i = 0; i < d.size(); i++)
        cout << d[i];
    //adds multiple element at the same time
    d.insert(d.begin() + 3, 4, 100);
    for (int i = 0; i < d.size(); i++)
        cout << d[i];
    //erase element form any position
    d.erase(d.begin() + 3);
    for (int i = 0; i < d.size(); i++)
        cout << d[i];
    //erase element from range
    d.erase(d.begin() + 3, d.begin() + 2);
    for (int i = 0; i < d.size(); i++)
        cout << d[i];
    //removes only element doesnot delete the memeory
    d.clear();
    if (d.empty())
        cout << "This is a empty vector" << endl;

    d.push_back(10);
    d.push_back(30);
    d.push_back(20);
    //front and last element of the  vector
    cout<<"Front :-- "<<d.front()<<" Last :-- "<<d.back()<<endl;
    return 0;
}
