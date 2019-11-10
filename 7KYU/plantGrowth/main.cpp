
#include<iostream>
#include<string>
using namespace std;


int main () {
int upSpeed{};
int downSpeed{};
int growth{};
int total{};
int time{0};
cin >> upSpeed >>  downSpeed >> total;
for (int i =0; i < total; i++){
    
    growth+=upSpeed;

    if (growth >= total) {
    
        time =i;
        
        break;
    }
   
     growth -= downSpeed;
}


cout << time;

 return time;


      
}