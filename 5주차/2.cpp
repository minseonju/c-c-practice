#include <iostream>
using namespace std;

void swap(int& first, int& second ){
int temp = first;
first = second;
second = temp;
return;
}

int main(){
    int first = 3;
    int second = 5;

    cout << "before>> " << first << "," << second << endl;
    swap(first, second);
     cout << "after>> " << first << "," << second << endl;
}