#include <iostream>
#include <string>
#include <vector>

using namespace std;

int searchBinary(int arr[], int size, int lookingFor);

int main()
{

    vector<int> arr{1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    int size = arr.size();

    int timesSearched{};

    int lookingFor{};

        cout << " welco0me to bianry search , entyer what your lookign for" << endl;

        cin >> lookingFor;


    searchBinary(arr[],size,lookingFor);





    return 0;
}

int searchBinary(int arr[], int size, int lookingFor)
{

    int low = {0};

    int high = size - 1;

    int mid = (low + high) /2;



if ( mid == lookingFor) {

cout << " \n found your number ";
return ( mid);

}

else  if (lookingFor < mid ) {

    high = mid -1;
}

    else {

            low = mid +1;

    }

return 0;

}