#include <iostream>
using namespace std;

int main()
{
    string x, y, z, A;
    x = y = z = "hello";
    A = x.substr(1, 1) + y.substr(2, 1) + z.substr(0, 1);
    cout << "A = " << A << endl;
    return 0;
}
