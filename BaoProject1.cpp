#include <iostream>
#include <string>
using namespace std;

int main()
{
   int x,y;
   cout << "Nhap x: ";
   cin >> x;
   cout << " Nhap y: ";
   cin >> y;
   int a= x % 2;
   if (a == 0){
    cout <<" x la so chia het cho 2"<<endl;
   }else{ 
    cout <<" x la so khong chia het cho 2<"<<endl;}
    int z =(x<y)?x:y;
    cout <<"Gia tri nho hon la: "<<z<<endl;
    int i = 1;
    while(i<=10)
    {
      cout <<i<<endl;
      i ++;
    }
    return 0;
 }