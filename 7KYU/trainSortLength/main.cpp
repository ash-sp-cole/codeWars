#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;





bool compare(string &s1,string &s2) 
{ 
    return s1.size() < s2.size(); 
} 




int main () {

vector <string> array{ "cheese", "fruit", "wine", "egg", "spagetti"};

    for (int i =0; i < array.size(); i++) {

   
        cout<< array[i] << " ";


    }


cout << endl;



sort(array.begin(),array.end(),compare);


    for (int i =0; i < array.size(); i++) {

        cout<< array[i] << " ";


    }


    return 0;
}