#include <iostream>
#include <string>
using namespace std;
int main(){
    int score = 96;
    int* pscore = &score;

    cout << "score:" << score << "location: " << &score << endl;
    cout << "pscore:" << *pscore << "location: " << pscore << endl;
}