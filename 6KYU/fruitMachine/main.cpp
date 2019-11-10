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
        vector<int> input{1, 1, 0};
        string result1{}, result2{}, result3{};

        int Wild{10}, Star{9}, Bell{8}, Shell{7}, Seven{6}, Cherry{5}, Bar{4}, King{3}, Queen{2}, Jack{1};

        result1 = reels.at(0).at(input.at(0));
        result2 = reels.at(1).at(input.at(1));
        result3 = reels.at(2).at(input.at(2));

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

        cout << "\n is wild : " << wild << "\n is 3 of kind " << all3;

        return 0;
}