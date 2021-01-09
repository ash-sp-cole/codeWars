#include <iostream>
#include <vector>

using namespace std;

int main(void)
{

    char testString[] = "Hello world test test test test test";
    vector<int> array{};
    size_t n = sizeof(testString) / sizeof(testString[0]);

    int wordCount = 0;

    for (int i = 0; i < n; i++){

        if (testString[i] != ' ' && testString[i-1] == ' ' || testString[i] != ' ' && i == 0){
            wordCount++
;
        }


    }
cout << wordCount;
    return 0;
}

