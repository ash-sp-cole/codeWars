#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<istream>
#include<sstream>
#include <cctype>
using namespace std;

int main () {


vector <vector<string> > reels {
         {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"},
        {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"},
         {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"}
};


vector <int> input{ 6,2,3};
string result1{}, result2{}, result3{};

;

result1= reels.at(0).at(input.at(0));
result2= reels.at(1).at(input.at(1));
result3= reels.at(2).at(input.at(2));



cout << result1 << "\n" << result2 << " \n" << result3;


return 0;
}