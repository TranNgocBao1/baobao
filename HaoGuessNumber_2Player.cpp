#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct User
{
    string name;
    int score = 0;
};

void printUsersInfo(User users[], int size)
{
    int width = max(static_cast<int>(users[0].name.length()), static_cast<int>(users[1].name.length())) + 3;

    cout << setw(width) << left << "User"
         << setw(width) << left << "Score" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << setw(width) << left << users[i].name
             << setw(width) << left << users[i].score << endl;
    }
}

int main()
{
    system("cls");
    User P1, P2;
    User users[2] = {P1, P2};

    for (int i = 0; i < 2; i++)
    {
        string name;
        cout << "Type user " << i + 1 << " name: ";
        getline(cin, name);
        users[i].name = name;
    }

    bool turn = false;
    while (true)
    {
        system("cls");
        printUsersInfo(users, 2);

        int number;
        cout << users[static_cast<int>(turn)].name << ", enter a number (0-3): ";
        cin >> number;
        system("cls");
        printUsersInfo(users, 2);

        int guess;
        bool win = true;

        cout << users[static_cast<int>(!turn)].name << ", guess the number: ";
        cin >> guess;
        system("cls");
        printUsersInfo(users, 2);

        if (guess != number)
        {
            cout << users[static_cast<int>(!turn)].name << " lose!" << endl;
            users[static_cast<int>(!turn)].score--;
        }
        else
        {
            cout << users[static_cast<int>(!turn)].name << " wins!" << endl;
            users[static_cast<int>(!turn)].score++;
        }

        char answer;
        cout << "Continue? (Enter to continue/ Type a char to stop)\n>>>";
        cin.get(answer);

        if (answer == '\n')
        {
            turn = !turn;
            system("cls");
        }
        else
        {
            break;
        }
    }

    system("cls");
    printUsersInfo(users, 2);
    cout << "Thanks for playing!";
    return 0;
}