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
    Kien = {"Kien"};
    Tam = {"Tam"};

    User listUsers[] = {Kien, Tam};

    while(true){
        bool round = rand() % 2;
        char answer;
        cout << listUsers[round].name <<" do you love " << listUsers[!round].name << "? (y/n)" << endl;
        cin.get(answer);
        cin.ignore(256, '\n');
        
        if(static_cast<char>(tolower(answer)) == 'y'){
            listUsers[!round].love_score += 5;
            cout << "YES" << endl;
        } else {
            listUsers[!round].love_score -= 5;
            cout << "NO" << endl;
        }
    }

    return 0;
}