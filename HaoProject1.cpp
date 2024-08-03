#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
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
    srand(time(0));
    User Kien, Tam;
    Kien = {"Tran Manh Kien"};
    Tam = {"Nguyen Le Thi Tam Cam Tam"};

    User listUsers[] = {Kien, Tam};

    while(true){
        bool round = rand() % 2;
        cout << listUsers[round].name <<" do you love " << listUsers[!round].name << "?" << endl;
        sleep(2);
    }

    return 0;
}