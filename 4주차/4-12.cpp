#include <iostream>
using namespace std;
int main(){
    int* ptr1 = new int(10);
    int* ptr2 = new int;

    *ptr2 = 20;

    cout << "ptr1: " << *ptr1 << " , ptr2: " << *ptr2 <<endl;
    delete ptr1, ptr2;
    return 0;
}