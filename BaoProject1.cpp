#include <iostream>
using namespace std;
#include <string>
int main() {
   string x, y, z;
   x=y=z = "hello";
   string A;
   A = x[1] + y[2] + z[0];
   cout << "A = " << A << endl;
   return 0;
}
