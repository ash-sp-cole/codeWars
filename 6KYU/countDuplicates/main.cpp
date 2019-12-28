#include <iostream>
#include <string>


int main () {



std::string str{"Indivisibilities"};

size_t n =str.length();

int count{};
char temp{};
for (int i = 0; i < n; i++){
        for (int j = i +1; j <n; j++) {

                if ( str[j] == str[i] && str[j] != temp) {

                        temp = str[j];
                        count +=1;
                }


        }
}



std::cout << " \n count is :::" << count;
    return 0;
}