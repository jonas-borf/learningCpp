#include <iostream>

using namespace std;

class Vector {
    public:
        Vector(int s) :elem{new double[s]}, sz{s} {}
        double& operator[](int i) {return elem[i];}
        int size() {return sz;}
    private:
        double* elem;
        int sz;
};

double read_and_sum(int s)
{
    Vector v(s);
    for (int i=0; i!=v.size(); ++i)
        cin>>v[i];

    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i];
    return sum;
}

int main()
{
    cout << "What size vector should we sum over?\n";
    int size;
    cin>>size;
    cout << "Enter the elements of the vector of size " << size << "\n";
    double sum;
    sum = read_and_sum(size);
    cout << "The sum of the elements in the vector with size " << size << " is " << sum << "\n";
    return 0;
}
