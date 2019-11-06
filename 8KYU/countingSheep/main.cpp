#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main () {

vector <bool> arr{true,false,true,false
,true,false
,true,false
,true,false
,true,false
};
double count{};
cout << arr.at(1);



        for ( int i=0; i < arr.size(); i++) {

            if (arr.at(i)==true) {
                count++;            }


        }



cout << count;



    return 0;
}