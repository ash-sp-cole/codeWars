#include<iostream>
#include<vector>
#include <algorithm>
#include <numeric>   
#include <map> 
  // std::accumulate
using namespace std; 

int main () {

vector <int> values {1,2,3};

for (int i = 0; i < values.size(); i++) {

values[i] = values[i] * 2;

}

cout << values.at(0) << values.at(1);

    return 0;
}