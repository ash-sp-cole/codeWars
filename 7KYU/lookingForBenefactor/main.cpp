
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string &s1, string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> array{};
    string word = "";
    string test ="hello my name isnt ashley";
    string str = test + " ";
    int count{};
    for (auto x : str)
    {

        if (x == ' ')
        {
                array.push_back(word);
 
            word = "";
        }
        else
        {
            word = word + x;
        }
    }

 


    sort(array.begin(), array.end(), compare);


    for (int i = 0; i < array.size(); i++)
    { cout << array[i] << endl;
    }
    

    string answer = array.at(0);

    for (int i=0; i< answer.size(); i++) {

           count++;


    }
    cout <<count;
    return 0;
}