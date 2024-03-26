#include <iostream>
#include <string>
using namespace std;
int main(){
    int score = 96;
    bool flag = true;
    double average = 3.5;

    cout << "price: " << score << " , size: " << sizeof(score) << " , address: " << &score << endl;
    cout << "price: " << flag << " , size: " << sizeof(flag) << " , address: " << &flag << endl;
    cout << "price: " << average << " , size: " << sizeof(average) << " , address: " << &average << endl;
}