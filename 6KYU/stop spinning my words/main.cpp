#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <sstream>

using namespace std;


int main () {

string str {} ,tmp{};
string reverseStr{};
vector <string> wordList {};


cout << "enter word" << endl ;

cin >> str;
int size = str.size();


stringstream s(str);
string word{};

while (s >> word) wordList.push_back(word);

for (int i=0; i < wordList.size(); i++) {
    cout << wordList[i];
}



    return 0;
}





// if ( str.size() >=5 ) {

// for (int i = str.size()-1; i >=0; i--) 
// {
//     k = str[i];

//     reverseStr.push_back(k);


// }

// cout << reverseStr;

// }
// else {
// cout << str;
// }