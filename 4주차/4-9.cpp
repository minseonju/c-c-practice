#include <iostream>
#include <string>
using namespace std;
int main(){
    int score = 96;
    int & rscore = score;

    cout << score << " , " << rscore << endl;
    score = 30;
    cout << score << " , " << rscore << endl;
    rscore=40;
    cout << score << " , " << rscore << endl;
}