#include <bits/stdc++.h>
//#include <climits>
//#include <cmath>
//#include <string.h>
// #include<string>
#include <windows.h>
#include <stdlib.h>
//#define endl '\n'
//#define PB push_back 
//#define pB pop_back 	
//#define pF pop_front 
//#define PF push_front 
//#define mod 1000000007 
//#define luup(i,a,b) for(int i=a;i<b;i++)
//typedef long long ll;
//typedef long double ld; 

using namespace std;




int main(){
    int bal=1000;

    
cout << "\n-------------------------------------------------------\n"<<"ROULETTE! place your bets: $";
int betr;cin>>betr;
bal-=betr;
cout << "\n-------------------------------------------------------\n";
// cout<<"ROULETTE BOARD:" << endl<<          "-----------1/3-----------";
cout<<"ROULETTE BOARD:\n";
Sleep(50);cout<<endl<<"____    ____              |";
Sleep(50);cout<<endl<<"|01| 02 |03| ==> Street 1 |";
Sleep(50);cout<<endl<<"|__|    |__|              |";
Sleep(50);cout<<endl<<"    ____                  |";
Sleep(50);cout<<endl<<" 04 |05| 06  ==> Street 2 |";
Sleep(50);cout<<endl<<"    |__|                  | First 1/3";
Sleep(50);cout<<endl<<"____    ____              |";
Sleep(50);cout<<endl<<"|07| 08 |09| ==> Street 3 |";
Sleep(50);cout<<endl<<"|__|    |__|              |";
Sleep(50);cout<<endl<<"    ____                  |";
Sleep(50);cout<<endl<<" 10 |11| 12  ==> Street 4 |";
Sleep(50);cout<<endl<<"    |__|                  |";
// cout<<endl<<          "------------------------- |";
// cout<<endl<<          "-----------2/3----------- |";
cout<<endl;
Sleep(50);cout<<endl<<"    ____                  |";
Sleep(50);cout<<endl<<" 13 |14| 15  ==> Street 5 |";
Sleep(50);cout<<endl<<"    |__|                  |";
Sleep(50);cout<<endl<<"____    ____              |";
Sleep(50);cout<<endl<<"|16| 17 |18| ==> Street 6 |";
Sleep(50);cout<<endl<<"|__|    |__|              | Second 1/3";
Sleep(50);cout<<endl<<"    ____                  |";
Sleep(50);cout<<endl<<" 19 |20| 21  ==> Street 7 |";
Sleep(50);cout<<endl<<"    |__|                  |";
Sleep(50);cout<<endl<<"____    ____              |";
Sleep(50);cout<<endl<<"|22| 23 |24| ==> Street 8 |";
Sleep(50);cout<<endl<<"|__|    |__|              |";

// cout<<endl<<          "------------------------- |";
// cout<<endl<<          "-----------3/3----------- |";
cout<<endl;
Sleep(50);cout<<endl<<"____    ____              |";
Sleep(50);cout<<endl<<"|25| 26 |27| ==> Street 9 |";
Sleep(50);cout<<endl<<"|__|    |__|              |";
Sleep(50);cout<<endl<<"    ____                  |";
Sleep(50);cout<<endl<<" 28 |29| 30  ==>Street 10 |";
Sleep(50);cout<<endl<<"    |__|                  | Third 3/3";
Sleep(50);cout<<endl<<"____    ____              |";
Sleep(50);cout<<endl<<"|31| 32 |33| ==>Street 11 |";
Sleep(50);cout<<endl<<"|__|    |__|              |";
Sleep(50);cout<<endl<<"    ____                  |";
Sleep(50);cout<<endl<<" 34 |35| 36  ==>Street 12 |";
Sleep(50);cout<<endl<<"    |__|                  |";
// cout<<endl<<          "-------------------------";

Sleep(99);cout<<endl<<" ||  ||  || ";
Sleep(99);cout<<endl<<" \\/  \\/  \\/";
Sleep(99);cout<<endl<<" C | C | C";
Sleep(99);cout<<endl<<" o | o | o";
Sleep(99);cout<<endl<<" l | l | l";
Sleep(99);cout<<endl<<" u | u | u";
Sleep(99);cout<<endl<<" m | m | m";
Sleep(99);cout<<endl<<" n | n | n";
Sleep(99);cout<<endl<<"   |   |        ";
Sleep(99);cout<<endl<<" 1 | 2 | 3";
cout << "\n-------------------------------------------------------\nChoose a category to place a bet:\n";
cout<<"1. Bet on a colour (2:1 winning)\n";
cout<<"2. Bet on EVEN or ODD (2:1 winning) \n";
cout<<"3. Bet on which HALF (2:1 winning)\n";
cout<<"4. Bet on which Column (3:1 winning)\n";
cout<<"5. Bet on which THIRD (3:1 winning)\n";
cout<<"6. Bet on which street (11:1 winning)\n";
cout<<"7. Bet on exact Number (35:1 winning)\n";
cout << "\n-------------------------------------------------------\n";
int roulplay;cout<<"category: ";cin>>roulplay;
cout << "\n-------------------------------------------------------\n";
int multipr=0;

int bet_number,bet_column,bet_third,bet_half,bet_street,bet_even,bet_color;

Sleep(500);
cout<<endl<<"\nWhat would you like to bet on....\n";
Sleep(500);

switch(roulplay){
   case 1: 
   cout<<"1.White (denoted by numbers not in a box)\n2.Red(denoted by numbers in a box)\n\nchoose an option: ";
   cin>>bet_color;
   break;

   case 2:
   cout<<"1.Odd\n2.Even\n\nchoose an option: ";
   cin>>bet_even;
   break;

   case 3:
   cout<<"1. First Half (numbers 1-18)\n2.Second Half (numbers 19-36)\n\nchoose an option: ";
   cin>>bet_half;
   break;

   case 4:
   cout<<"1. Column 1\n2. Column 2\n3. Column 3\n\nchoose an option: ";
   cin>>bet_column;
   break;

   case 5:
   cout<<"1. First 12 elements (1-12)\n2. Second 12 elements (13-24)\n3. Third 12 elements (25-36)\n\nchoose an option: ";
   cin>>bet_third;
   break;

   case 6:
   cout<<"Choose a street from 1-12 (each street contains 3 numbers as shown above)\n\nInput street number: ";
   cin>>bet_street;
   break;

   case 7:
   cout<<"Choose a number from 1-36.\n\ninput your Number: ";
   cin>>bet_number;
   break;

}


Sleep(1000);
cout<<endl<<endl<<"You placed a bet of $"<<betr<<" on category: "<<roulplay;

cout << "\n-------------------------------------------------------\n";

srand((unsigned)time(0));
int num= 1+ (rand()%38);
if(num==37||num==38){
    num=0;
}
Sleep(1000);
cout<<"The dealer spins the wheel!\n\n";
char s = '.';
for (int dots = 0; dots < 7; dots++)    
{
   cout<<s;
   Sleep(100-50);
}
cout<<endl;
for (int dots = 0; dots < 7; dots++)    
{
   cout<<s;
   Sleep(200-50);
}
cout<<endl;
for (int dots = 0; dots < 7; dots++)    
{
   cout<<s;
   Sleep(300-50);
}
cout<<endl;
for (int dots = 0; dots < 7; dots++)    
{
   cout<<s;
   Sleep(400-50);
}


cout<<endl;
cout<<endl;
cout<<"The Ball landed on:"<<endl<<endl;
Sleep(1000);
cout<<"-----> "<<num<<  " <------"<<endl<<endl;
Sleep(1000);



if(num==0){
    cout<<"Sorry you lost...your bet is transferred to the dealer.\n";
}else{
   
    switch(roulplay){
    case 1:
    if(bet_color%2==((num-1)%2+((num-1)/12)%2)%2){
      cout<<"Hurray! You guessed correctly";
      multipr=2;

    }else{cout<<"You lost you bet, you didn't bet on the correct colour\n";}
    break;


    case 2:
    if(num%2==bet_even){
      cout<<"Hurray! You guessed correctly";
      multipr=2;

    }else{cout<<"You lost you bet, you didn't bet correctly on EVEN or ODD\n";}
     break;


    case 3:
    if((num-1)/18==bet_half-1){
      cout<<"Hurray! You guessed correctly";
      multipr=2;
      

    }else{cout<<"You lost you bet, you didn't bet on the correct Half\n";}
     break;


    case 4:
    if(num%3==bet_column%3){
      cout<<"Great Prediction! You guessed correctly";
      multipr=3;

    }else{cout<<"You lost you bet, you didn't bet on the correct Column\n";}
     break;


    case 5:
    if((num-1)/12==bet_third-1){
      cout<<"Great Prediction! You guessed correctly";
      multipr=3;

    }else{cout<<"You lost you bet, you didn't bet on the correct Third\n";}
     break;


    case 6:
    if((num-1)/3==bet_street){
      cout<<"Amazing Guess! You guessed correctly";
      multipr=11;

    }else{cout<<"You lost you bet, you didn't bet on the correct Street\n";}
     break;


    case 7:
    if(num==bet_number){
      cout<<"WOWOWOWOWOWOW! Perfect! You guessed correctly";
      multipr=35;

    }else{cout<<"You lost you bet, you didn't bet on the correct Number \n";}
     break;






}

}

bal+= multipr*betr;
Sleep(1000);

cout << "\n-------------------------------------------------------\n";

cout<<"\nYour available balance is: $"<<bal<<endl<<endl<<"THANK YOU FOR PLAYING!\n";


return 0;
}

