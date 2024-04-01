#include <iostream>
using namespace std;
void add(int a);

int main(){
    cout << "Test" << endl;

    for(int i=0; i<5; i++){
        add(i);
    }
    return 0;

}

void add(int a){
    static int totalsum =0;
    totalsum += a;
    cout << totalsum << endl;
}