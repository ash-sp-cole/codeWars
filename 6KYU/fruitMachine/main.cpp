#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <istream>
#include <sstream>
#include <cctype>
using namespace std;

int main()
{

        vector<vector<string>> reels{
            {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"},
            {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"},
            {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"}};

        bool all3 = false;
        bool wild = false;
        vector<int> input{1, 9, 9};
        vector <string> scoresString{};
        int totalReward{};
        string result1{}, result2{}, result3{};

        int Wild{10}, Star{9}, Bell{8}, Shell{7}, Seven{6}, Cherry{5}, Bar{4}, King{3}, Queen{2}, Jack{1};

        result1 = reels.at(0).at(input.at(0));
        result2 = reels.at(1).at(input.at(1));
        result3 = reels.at(2).at(input.at(2));

        scoresString.push_back(result1);
        scoresString.push_back(result2);
        scoresString.push_back(result3);
        cout << result1 << "\n"
             << result2 << " \n"
             << result3;

        if (result1 == result2 && result2 == result3)
        {
                all3 = true;
        }
        else if (result1 == result2 && result3 == "Wild" || result1 == "Wild" && result2 == result3)
        {
                wild = true;
        }

for (int i =0 ; i < scoresString.size(); i++) {
if (scoresString[i]== "Jack") totalReward += 1;
if (scoresString[i]== "Queen") totalReward += 2;
if (scoresString[i]== "King") totalReward += 3;
if (scoresString[i]== "Bar") totalReward += 4;
if (scoresString[i]== "Cherry") totalReward += 5;
if (scoresString[i]== "Seven") totalReward += 6;
if (scoresString[i]== "Shell") totalReward += 7;
if (scoresString[i]== "Bell") totalReward += 8;
if (scoresString[i]== "Star") totalReward += 9;
 if (scoresString[i]== "Wild") totalReward += 10;     
}

        cout << "\n is wild : " << wild << "\n is 3 of kind " << all3 << "\n" << totalReward;

        return 0;

        
}