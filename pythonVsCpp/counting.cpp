#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for (int i = 0; i < 100000000; ++i)
        ++count;

    cout << count << "\n";
    return 0;
}
