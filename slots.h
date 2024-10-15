#ifndef SLOTS_H
#define SLOTS_H

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

class Slots
{
private:
    int bal;

public:
    Slots(int &funds)
    {
        bal = funds;
    }
    void print(int n)
    {
        switch (n)
        {
        case 1:
            cout << endl
                 << "_____________\n|   _____   |\n|   |   |   |\n|   |   |   |\n|   |   |   |\n|   |___|   |\n|___________|\n";
            break;
        case 2:
            cout << endl
                 << "______________\n|   ______   |\n|   |_____   |\n|   _____|   |\n|   |_____   |\n|   _____|   |\n|____________|\n";

            break;
        case 3:
            cout << endl
                 << "_____________\n|    _   _  |\n|   | | | | |\n|   | | | | |\n| | | | |   |\n| |_| |_|   |\n|___________|\n";

            break;
        case 4:
            cout << endl
                 << "_____________\n|           |\n|  \\    /   |\n|   \\__/    |\n|   /  \\    |\n|  /    \\   |\n|___________|\n";

            break;
        case 5:
            cout << endl
                 << "_____________\n|           |\n|  /  ||  \\ |\n|  \\__||__/ |\n|     ||    |\n|     ||    |\n|___________|\n";

            break;
        }
    }

    int slots(int funds, int x)
    {
        if (funds < 100)
        {
            cout << "NOT ENOUGH BALANCE!";
            return funds;
            x = 0;
        }
        else
        {
            funds -= 100;

            int left, mid, right;
            cout << endl
                 << "your slots:" << endl
                 << "-------------------------------------------------------";
            srand((unsigned)time(0));
            left = 1 + (rand() % 5);

            // srand((unsigned)time(0));
            mid = 1 + (rand() % 5);
            // srand((unsigned)time(0));

            right = 1 + (rand() % 5);

            //   cout<<left<<mid<<right<<endl;

            print(left);
            print(mid);
            print(right);

            cout << endl;

            if (left == right && left == mid)
            {
                cout << endl
                     << "!!!YOU HAVE WON THE JACKPOT!!!" << endl;
                funds += 3000;
            }
            else
            {
                cout << endl
                     << "SORRY, DIDNT MATCH.........." << endl;
            }
            cout << "-------------------------------------------------------";

            return funds;
        }
    }

    int main()
    {

        int x = 1;
        int i = 0;
        while (x != 0)
        {
            if (i)
                bal = slots(bal, x);

            cout << "\n your available balance: $" << bal;
            if (i == 0)
                cout << "\nplay?";
            if (i)
                cout << "\nplay again?";
            cout << endl
                 << "0. No" << endl
                 << "1. Yes" << endl;
            cout << endl
                 << "input a number:";
            cin >> x;
            cout << endl;
            i++;
        }
        cout << "-------------------------------------------------------" << endl
             << "thank you for playing!" << endl
             << "-------------------------------------------------------" << endl;

        return 0;
    }
};

#endif // end SLOTS_H