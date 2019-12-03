#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


int main () {

string str{"heeee ee ello"};
string spaceStr{};



for (int i =0; i < str.size(); i++) {

    
char k = i;

if (k == ' '){


       k =  k + ' ';

}
else {
   k =  k +'  ';
}

    spaceStr += k ;
}
cout << spaceStr;

    return 0;
}




