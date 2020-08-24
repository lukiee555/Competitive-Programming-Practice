#include<iostream>
#include<unordered_map>
using namespace std;

struct Person
{
    string first, last; 

    Person(string f, string l)
    {
        first = f;
        last = l;
    }
    bool operator==(const Person &p) const
    {
        return first == p.first && last == p.last;
    }
};

class MyHashFunction
{
public:

    size_t operator()(const Person &p) const
    {
        return p.first.length() + p.last.length();
    }
};

int main()
{
    unordered_map<Person, int, MyHashFunction> um;
    Person p1("kartik", "kapoor");
    Person p2("Ram", "Singh");
    Person p3("Laxman", "Prasad");

    um[p1] = 100;
    um[p2] = 200;
    um[p3] = 100;

    for (auto e : um)
    {
        cout << "[" << e.first.first << ", "
             << e.first.last
             << "] = > " << e.second << '\n';
    }

    return 0;
}