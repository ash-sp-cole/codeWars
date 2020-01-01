#include<iostream>

using namespace std;



int main () {

int arr[] {1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};

int target{};

int low{-1};

int mid{};

size_t n = sizeof(arr)/ sizeof(arr[0]);

int high = (n-1);

cout << " please enter the value you wish to search for \n \n \n" ;
cin >> target;

cout << "\n \n \n ====================== SEARCHING ...................... \n \n" << endl;


while (low < high) {

    mid = (low + high) / 2;



            if (target == ar) {

                cout << " value found at index :    " << mid << " value was  " << arr[mid];
                break;
              
            }

            else if (target < arr[mid]){

                high = mid -1;

            }

            else {

                    low = mid +1;

            }

   

 
}


    return 0;
}