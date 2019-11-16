#include<iostream>
#include<string>
#include<vector>

using namespace std;




int main () {


double height{},width{},length{};
double area{};

cout << "enter the following , height , width , length of room"<< endl;

cin >> height;
cin >> width;
cin >> length ;
area = height * width * length;

cout << "\n" << area  << endl;



// height * width * length












   return 0; 
}