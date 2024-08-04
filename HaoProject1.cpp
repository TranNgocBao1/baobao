#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;

enum LEVEL
{
    bad = -15,
    hate = -5,
    none = 0,
    low = 10,
    normal = 25,
    high = 40,
    extra = 60,
    mega = 65,
    super_mega = 85,
    ultra_ultimate = 100
};

struct User
{
    char name[120];
    long int love_score = 0;
    string loveStatus;
};

void loveStatus(User &user)
{
    long int score = user.love_score;

    // Handle negative scores
    if (score <= hate)
    {
        user.loveStatus = "Hate";
        return;
    }
    else if (score < low)
    {
        user.loveStatus = "No Love";
        return;
    }

    // Handle positive scores
    if (score <= normal)
    {
        user.loveStatus = "Friend";
        return;
    }
    else if (score <= high)
    {
        user.loveStatus = "Best friend";
        return;
    }
    else if (score <= extra)
    {
        user.loveStatus = "Love";
        return;
    }
    else if (score <= mega)
    {
        user.loveStatus = "Deep love";
        return;
    }
    else if (score <= super_mega)
    {
        user.loveStatus = "Crazy love";
        return;
    }
    else
    {
        user.loveStatus = "Eternal love";
        return;
    }
}

int main()
{
    srand(time(0));
    User Kien, Tam;
    Kien = {"Kien"};
    Tam = {"Tam"};

    User listUsers[] = {Kien, Tam};
    while (true)
    {
        for (User user : listUsers)
        {
            loveStatus(user);
            cout << user.name << ": " << user.loveStatus << endl;
        };

        bool round = rand() % 2;
        char answer;
        cout << listUsers[round].name << " do you love " << listUsers[!round].name << "? (y/n)" << endl;
        cin.get(answer);
        cin.ignore(256, '\n');

        if (static_cast<char>(tolower(answer)) == 'y')
        {
            listUsers[!round].love_score += 5;
        }
        else
        {
            listUsers[!round].love_score -= 5;
        }

        system("cls");
    }

    return 0;
}