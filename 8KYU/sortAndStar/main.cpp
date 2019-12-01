#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;



int main () {


string answer{"test"};


string word {"550011051"};

for (int i =0; i < word.size(); i++) {

char k = word[i];

if (k == '0') { k = 'O'; }
else if ( k == '5') { k = 'S';}
else if ( k == '1') { k = 'I';}



answer = answer + k;
}


cout << answer;







    return 0;
}