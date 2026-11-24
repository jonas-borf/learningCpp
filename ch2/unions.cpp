#include <iostream>

using namespace std;

enum class Type {ptr, num};

struct Entry {
    string name;
    Type t;
    Node* p;
    int i;
};

void f(Entry* pe)
{
    if(pe->t == Type::num)
        cout << pe->i;
}
