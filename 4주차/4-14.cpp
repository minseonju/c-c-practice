#include <iostream>
#include <string>
using namespace std;

union ID{
    int nID;
    char cID[sizeof(int)];
};

int main(){
    ID sID;
    sID.nID = 0x01020304;
    printf("0x%08x %d \n", sID.nID, sID. nID);
    printf("0x%02x 0x%02x 0x%02x 0x%02x ", sID.cID[0], sID.cID[1], sID.cID[2], sID.cID[3]);
}