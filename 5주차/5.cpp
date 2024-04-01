#include <iostream>
using namespace std;
template<typename T>

void Swap(T& first, T& second ){
T temp ;
temp = first;
first = second;
second = temp;

}

template <> void Swap<int>(int& firtst, int& second){firtst++; second++;}

int main(){
    
    int first = 3;
    int second = 5;

    cout << "before>> " << first << "," << second << endl;
    Swap(first, second);
     cout << "after>> " << first << "," << second << endl;
}