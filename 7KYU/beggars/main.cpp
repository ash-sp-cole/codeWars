#include <iostream>
#include <vector>
#include<algorithm>
#include <numeric> 

using namespace std;

int main()
{

    vector<int> golds{7, 3};

   vector  <int> gnomeOne{};
   vector  <int> gnomeTwo{};

    int rightsize = golds.size() - 1;
    int leftCoin = golds.at(0);

    int rightCoin = golds.at(rightsize);

    for (int i=0; i< golds.size(); i++ ){
if (i >= rightsize ) {
    gnomeOne.push_back(i);
}






    }





        //////////////////////////////////////////////////////// second beggar
    


    return 0;
}
