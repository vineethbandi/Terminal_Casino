#include <bits/stdc++.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int print(int n){
    switch(n){
        case 1:
        cout<<endl<<"_____________\n";Sleep(200);cout<<"|   _____   |\n";Sleep(200);cout<<"|   |   |   |\n";Sleep(200);cout<<"|   |   |   |\n";Sleep(200);cout<<"|   |   |   |\n";Sleep(200);cout<<"|   |___|   |\n";Sleep(200);cout<<"|___________|\n";Sleep(200);cout<<"";
        break;
        case 2:
        cout<<endl<<"______________\n";Sleep(200);cout<<"|   ______   |\n";Sleep(200);cout<<"|   |_____   |\n";Sleep(200);cout<<"|   _____|   |\n";Sleep(200);cout<<"|   |_____   |\n";Sleep(200);cout<<"|   _____|   |\n";Sleep(200);cout<<"|____________|\n";Sleep(200);cout<<"";

        break;
        case 3:
        cout<<endl<<"_____________\n";Sleep(200);cout<<"|    _   _  |\n";Sleep(200);cout<<"|   | | | | |\n";Sleep(200);cout<<"|   | | | | |\n";Sleep(200);cout<<"| | | | |   |\n";Sleep(200);cout<<"| |_| |_|   |\n";Sleep(200);cout<<"|___________|\n";Sleep(200);cout<<"";

        break;
        case 4:
        cout<<endl<<"_____________\n";Sleep(200);cout<<"|           |\n";Sleep(200);cout<<"|  \\    /   |\n";Sleep(200);cout<<"|   \\__/    |\n";Sleep(200);cout<<"|   /  \\    |\n";Sleep(200);cout<<"|  /    \\   |\n";Sleep(200);cout<<"|___________|\n";Sleep(200);cout<<"";

        break;
        case 5:
        cout<<endl<<"_____________\n";Sleep(200);cout<<"|           |\n";Sleep(200);cout<<"|  /  ||  \\ |\n";Sleep(200);cout<<"|  \\__||__/ |\n";Sleep(200);cout<<"|     ||    |\n";Sleep(200);cout<<"|     ||    |\n";Sleep(200);cout<<"|___________|\n";Sleep(200);cout<<"";

        break;
    }
}

int slots(int bal, int x)
{
    if (bal < 100)
    {
        cout<<"NOT ENOUGH BALANCE!";
        return bal;
        x=0;
    }else{
    bal -= 100;

    int left, mid, right;
    cout<<endl<<"your slots:"<<endl<<"-------------------------------------------------------";
    srand((unsigned)time(0));
    left = 1 + (rand() % 5);
    
    // srand((unsigned)time(0));
    mid = 1 + (rand() % 5);
    // srand((unsigned)time(0));
     
    right = 1 + (rand() % 5);
  
//   cout<<left<<mid<<right<<endl;


    
  print(left);
  Sleep(500);
  print(mid);
  Sleep(500);
  print(right);
  
 
   
    cout<<endl;

    if(left==right&&left==mid){
        cout<<endl<<"!!!YOU HAVE WON THE JACKPOT!!!"<<endl;
        bal+=3000;
    }else{
        cout<<endl<<"SORRY, DIDNT MATCH.........."<<endl;
    }
    cout<<"-------------------------------------------------------";



    return bal;
    }
}

int main()
{

   
    int x=1;

    int bal;
    cout<<"input your balance: $";
    
     cin>>bal;


while(x!=0){
    bal=slots(bal,x);

    cout <<"\n your available balance: $"<< bal;

    cout<<"\nplay again?";
    cout<<endl<<"0. No"<<endl<<"1. Yes"<<endl;
    cout<<endl<<"input a number:";
    cin>>x;
    cout<<endl;
}
cout<<"-------------------------------------------------------"<<endl<<"thank you for playing!"<<endl<<"-------------------------------------------------------"<<endl;



  

    return 0;
}
