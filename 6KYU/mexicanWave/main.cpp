#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<sstream>
#include <cctype>
using namespace std;

int main () {
vector <string> stringArray {" 1 3 4 15 4 1 9"};
vector <int> numbers{};
for (auto &s : stringArray) {
    stringstream parser (s);
    int x = 0;
    parser >> x;

    numbers.push_back(x);



}
int size = numbers.size();
sort(numbers.begin(),numbers.end());

for (int i =0; i < size; i++) {
    cout << numbers[i];

}





}