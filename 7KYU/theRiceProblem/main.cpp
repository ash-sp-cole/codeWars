#include<iostream>
#include<string>
#include<vector>

using namespace std;


vector <int> checkZero(vector <int> &queue) {

if (queue.at(0) == 0) {

queue.erase(queue.begin() +0);

}
    return queue;
}


 int checkFrontOFLine(vector <int> &queue , int &person) {

if (person == queue.at(0)) {

    person--;
    queue.push_back(person);
}

return  person;
}




int main () {

vector <int> queue{2,1,3,6,4};

int position = queue.at(0);

int person = queue.at(position);

int waitTime{};

queue.erase(queue.begin() +0);


while (person > 0) {


    checkZero(queue);

    person--;
    // checkFrontOFLine(queue,person);


    waitTime++;

cout << waitTime << endl;


}





    return 0;
}