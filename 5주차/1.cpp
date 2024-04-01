#include <iostream>
using namespace std;

void addvalue(int val){
    val++;
    cout << "inner>>" << val << endl;
    return; 
}

int main(){
    int num = 3;
    cout << num << endl;
    addvalue(num);
    cout << "after>>"<< num << endl;
}