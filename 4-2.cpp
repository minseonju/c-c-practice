// #include <iostream>
// using namespace std;
// int main(){
//     char dog[8] = {'m', 'y', ' ', 'd', 'o', 'g', ' ', 'i'};
//     char cat[8] = {'m', 'y', ' ', 'c', 'a', 't', ' ', '\0'};
//     cout << dog << endl;
//     cout << cat << endl;
// }

#include <iostream>
using namespace std;
int main(){
    char dog[] = "My dog is a poodle.";
    char cat[7] = "My cat";

    cout << dog << " , size = "  << sizeof(dog) << endl;
    cout << dog << " , size = "  << sizeof(dog) << " , strlen = " << strlen(dog) << endl;
    cout << cat << endl;
}