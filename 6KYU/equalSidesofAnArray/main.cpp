#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

 

string sliceString (string str )
{

string answerString{};
vector <char> answer {};
for ( int i = 0; i < str.size(); i++){

char k =str[i];
answer.push_back(str[i]);


}

answer.erase(answer.begin()+0);
answer.erase(answer.end()-1);
ostringstream out;

for (char c: answer) answerString.push_back(c);

cout << answerString;




  return answerString ; 
}