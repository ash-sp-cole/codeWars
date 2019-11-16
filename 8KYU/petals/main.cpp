#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<sstream>
#include <cctype>
using namespace std;

int main () {

int petal{};
 cin >> petal;
 string result;
vector <string> answers{"I love you", "a little", "a lot", " passionately", "madly", "not at all"};


if (petal == 6 || ) {result = answers.at(5);}

else if (petal!=6) {
petal = petal%6 ;

result = answers.at(petal -1);
}

cout << "\n" << result;

    return 0;
} 