#include <iostream>
#include <string>
using namespace std;
int main(){
    char chartest1[10] = "char test";
    char chartest2[10];

    //chartest2 = chartest1;

    string strtest1 = " string";
    string strtest2;
    strtest2 = strtest1;

    string strtest3 = strtest1 + strtest2;
    string strtest4 = " test";
    strtest4 += strtest1;

    cout << strtest1 << " , " << strtest2 << " , " <<strtest3 <<" , " << strtest4 << endl;


}