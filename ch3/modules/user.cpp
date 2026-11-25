import Vector;
#include <iostream>
#include <cmath>

using namespace std;
using namespace Vector;
double sqrt_sum(Vector& v)
{
    double sum=0;
    for (int i=0; i<v.size(); ++i)
        sum+=sqrt(v[i]);
    return sum;
}

int main()
{
    int size;
    cout << "What size vector?\n";
    cin>>size;
    Vector v[size];
    cout << "Enter elements of vector of size " << size << ".\n";
    for (int i=0; i!=v.size();++i)
        cin>>v[i];
    cout << "The sum of the sqrt of the elemets is " << sqrt_sum(v) << ".\n";
    return 0;
}
