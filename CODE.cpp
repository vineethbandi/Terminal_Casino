#include <iostream>
#include <cstdlib>
#include <string>
#include "slots.h"
#include <ctime>
#include <windows.h>
using namespace std;
void Play_game(int &funds, string name);
void Home(int &funds, string name);
int Manage_Funds(int &funds, string name);

int main()
{
    string name;
    int funds = 1000;
    cout << "Please enter your name:" << endl;
    getline(cin, name);
    Home(funds, name);

    return 0;
}
void Play_Game(int &funds, string name)
{
    int flow;
    Sleep(300);
    cout << "you have choosen option 1. Play Game" << endl
         << endl;
         
    Sleep(300);
    cout << "CHOOSE A GAME TO PLAY:" << endl
         << endl;
    Sleep(300);
    cout << "1. SLOTS" << endl
         << endl;
    Sleep(300);
    cout << "2. GUESSING GAME" << endl
         << endl;
    Sleep(300);
    cout << "3. TICK TOCK CLOCK" << endl
         << endl;
    Sleep(300);
    cout << "4. go back to main menu" << endl
         << endl;
    Slots s(funds);
    while (1)
    {
        cin >> flow;
        switch (flow)
        {
        case 1:
            s.main();
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            Home(funds, name);
            break;

        default:
            continue;
        }
    }
}
int Manage_Funds(int &funds, string name)
{
    int flow;
    Sleep(300);
    cout << "you have choosen option 2. Manage Funds" << endl
         << endl;
    Sleep(300);
    cout << "YOUR AVAILABLE BALANCE: " << funds << endl
         << endl;
    Sleep(300);
    cout << "1. ADD FUNDS " << endl
         << endl;
    Sleep(300);
    cout << "2. WITHDRAW FUNDS " << endl
         << endl;
    Sleep(300);
    cout << "3. go back to main menu " << endl
         << endl;
    while (1)
    {
        cin >> flow;
        cout << "\n-------------------------------------------------------\n";
        switch (flow)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:
            Home(funds, name);
            break;

        default:
            continue;
        }
    }
}

void Home(int &funds, string name)
{

    int flow;
    Sleep(150);cout << "------------------------------------------------------- " << endl;
    Sleep(150);cout << "|                                                     |" << endl;
    Sleep(150);cout << "|       \\        /  ___      __  __        __         |" << endl;
    Sleep(150);cout << "|        \\  /\\  /  |__  |   |   /  \\ |\\/| |_          |" << endl;
    Sleep(150);cout << "|         \\/  \\/   |___ |__ |__ \\__/ |  | |__         |" << endl;
    Sleep(150);cout << "|                                                     |" << endl;
    Sleep(150);cout << "|              _|__     ____   __       _|__          |" << endl;
    Sleep(150);cout << "|             |_|_        |   /  \\     |_|_           |" << endl;
    Sleep(150);cout << "|             __|_|       |   \\__/     __|_|          |" << endl;
    Sleep(150);cout << "|               |                        |            |" << endl;
    Sleep(150);cout << "|            ____                                     |" << endl;
    Sleep(150);cout << "|           |    \\  __  __          __                |" << endl;
    Sleep(150);cout << "|           |      |__||__  | |\\ | /  \\               |" << endl;
    Sleep(150);cout << "|           |____/ |  | __| | | \\| \\__/               |" << endl;
    Sleep(150);cout << "|                                                     |" << endl;
    Sleep(150);cout << "-------------------------------------------------------" << endl;
    Sleep(300);cout << "Welcome " << '"' << name << '"' << endl
         << endl;
    Sleep(300);cout << "1. Play Game" << endl
         << endl;
    Sleep(300);cout << "2. Manage Funds" << endl
         << endl;
    Sleep(300);cout << "3. How To Play" << endl
         << endl;
    Sleep(300);cout << "4. Credits" << endl
         << endl;
    Sleep(300);cout << "5. Exit" << endl
         << endl;
    Sleep(300);cout << "<CHOOSE AN OPTION BY ENTERING A VALID NUMBER>\n-------------------------------------------------------" << endl
         << endl;

    while (1)
    {

        cin >> flow;
        cout << "\n-------------------------------------------------------\n";
        switch (flow)
        {
        case 1:
            Play_Game(funds, name);
            break;
        case 2:
            Manage_Funds(funds, name);
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            return;

        default:
            cout << "!!!PLEASE ENTYER A VALID INPUT!!!" << endl
                 << endl;
            continue;
        }
    }
}