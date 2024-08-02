#include <iostream>
using namespace std;

int main()
{
    string x, y, z, A;
    x = y = z = "hello";
    cout << "A = " << A << endl;
    int i = x[1] + y[2] + z[0];
    cout << "A = " << (char) i << endl;
    return 0;
}