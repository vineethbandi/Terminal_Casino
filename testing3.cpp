#include <bits/stdc++.h>
//#include <climits>
// //#include <cmath>
// #include <string.h>
// #include <string>
// #include <windows.h>
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


srand((unsigned)time(0));
int num= 1+ (rand()%38);
if(num==37||num==38){
    num=0;
}
cout<<num;

return 0;
}

// #include <iostream>
// #include <unistd.h>     //required for usleep()
// using namespace std;
// int main(){
//     //usleep will pause the program in micro-seconds (1000000 micro-seconds is 1 second)
//     const int microToSeconds = 1000000;   
//     const double delay1 = 2 * microToSeconds;     //2 seconds
//     const double delay2 = 4.5 * microToSeconds;     //4.5 seconds
    
//     cout<<"Delay 1 in progress... ("<<delay1/microToSeconds<<"s)"<<endl;
//     usleep(delay1);        
//     cout<<"  => Delay 1 is over"<<endl<<endl;
    
//     cout<<"Delay 2 in progress... ("<<delay2/microToSeconds<<"s)"<<endl;
//     usleep(delay2);
//     cout<<"  => Delay 2 is over"<<endl<<endl;

//     return 0;
// }