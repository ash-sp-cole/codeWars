#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<istream>
#include<sstream>
#include <cctype>
using namespace std;

int main () {



vector <vector<string>> reels {
        reels[0] = {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"},
        reels[1] = {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"},
        reels[2] = {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"}
};

vector <int> spins (3);

for  (int i =0; i <spins.size();i++) {
cin >> spins[i];

}



cout << spins.at(0) << spins.at(1);
return 0;
}