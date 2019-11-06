#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main () {

string str = {"hello its me mario"};

str.erase(remove(str.begin(), str.end(), ' '), str.end());

cout << str;








    return 0;
}