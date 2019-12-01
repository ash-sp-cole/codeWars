#include<iostream>
#include<vector>
#include <algorithm>
#include <numeric>      // std::accumulate
using namespace std; 

int main () {

vector <int> group1 { 1,4,2};
vector <int> group2 { 5,4,3};


 int totalOne = accumulate(group1.begin(),group1.end(),0);

 int totalTwo = accumulate(group1.begin(),group1.end(),0);

int finalTotal = totalOne + totalTwo;


cout <<  finalTotal;
    return 0;
}