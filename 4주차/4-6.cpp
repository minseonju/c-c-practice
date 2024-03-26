#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    char chartest1[10] = "char test";
    char chartest2[10];

    //chartest2 = chartest1;
    strcpy(chartest2, chartest1);

    char chartest3[20] = " ... ";
    strcat(chartest3,chartest2);

    cout << chartest1 << "," << chartest2 << "," << chartest3 << ", size = " << strlen(chartest3) << endl;
}