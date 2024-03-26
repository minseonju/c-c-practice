#include <iostream>
using namespace std;
int main(){
    const int numbertotalsize = 2;

    int number[numbertotalsize] = {2,1};
    int temp;
    temp = number[0];
    number[0] = number[1];
    number[1] = temp;

    for(int i=0; i<numbertotalsize; i++){
        cout << number[i] << " ";
    }
}