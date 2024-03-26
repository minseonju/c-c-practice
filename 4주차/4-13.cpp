#include <iostream>
#include <string>
using namespace std;
struct student{
    char name[20];
    int age;
    int id;
    char address[100];
};
int main(){
    struct student cnu;
    student cbnuS[5];

    student cbnuS1 = {"mike", 20, 1, "cheongju"};
    student cbnuS2 = {"alice", 20, 2, "cheongju"};
    student cbnuS3 = {};

    cout << cbnuS1.name << "학생은 " << cbnuS1.age << " 살이고, 학번은 " << cbnuS1.id << " 이며, " << cbnuS1.address << "에 산다" << endl;

    
}