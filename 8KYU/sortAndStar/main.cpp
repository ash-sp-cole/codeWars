#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

  string chosenWord{};
  string star{"***"};

  vector<string> str{"pear", "bread", "sausage", "cheese", "jam"};

  sort(str.begin(), str.end());

  chosenWord = str.at(0);

  string result{};

  size_t n = chosenWord.length();

  for (int i = 0; i < n; i++)
  {
    result += chosenWord[i];
    if (i != str[0].length - 1)
    {
      result += "***";
    }
  }


cout << result;
return 0;
}