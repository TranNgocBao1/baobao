#include <iostream>
#include <string>
using namespace std;

enum LEVEL
{
    low,
    normal,
    high,
    extra,
    mega,
    super_mega,
    ultra_ultimate
};

struct User {
    char name[120];
    long int love_score = 0;
};


int main()
{
    User Kien, Tam;
    Kien = {"Tran Manh Kien"};
    Tam = {"Nguyen Le Thi Tam Cam Tam"};

    

    return 0;
}