#include <iostream>

using namespace std;

char word[] = "fart0";
char* q = &word[0];
char x = 'w';

int count_x(const char* p, char x)
{
    if (p==nullptr)
            return 0;
    int count = 0;
    for (; *p!=0; ++p)
        if (*p==x)
            ++count;
    return count;
}

int main()
{
    cout << count_x(q, x);
    return 0;
}
