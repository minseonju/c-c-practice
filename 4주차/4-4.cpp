#include <iostream>
using namespace std;
int main(){
    char dogname[20];
    char dogcolor[20];

    cout << "please enter your dog's name: \n";
    cin.getline(dogname, 20);
    cout << "please enter your dog's fur color: \n";
    cin.getline(dogcolor, 10);
    cout << "The color of" << dogname << " is " << dogcolor << ".\n";

    string catname;
    string catcolor = "white";
    cin >> catname;
    cout << "the color of " << catname << " is " << catcolor << "\n";

}