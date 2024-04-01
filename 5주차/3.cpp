#include <iostream>
using namespace std;

int totalsum =0;

void add(int a){
    totalsum += a;
}

void print(){
    cout << totalsum << endl;
}
int main(){
cout << "Test" << endl;

for(int i=0; i<5; i++){
    add(i);
}
print();

return 0;
}