#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int result;
    vector<int> arr{4, 2, 8, 6, 10, 7, 4};
    vector<int> odd{};
    vector<int> even{};
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] % 2 == 0)
        {
            even.push_back(arr[i]);
        }

        else
        {
            odd.push_back(arr[i]);
        }
    }

    if (odd.size() == 1)
    {
        result = odd.at(0);
    }
    else
        result = even.at(0);

    return result;
}