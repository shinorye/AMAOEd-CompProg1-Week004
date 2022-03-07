#include <cstudio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    string name, pw, addr;
    cout << "Enter Name: ";
    getline (cin, name);
    cout << "Enter Password: ";
    getline (cin, pw);
    cout << "Enter Address: ";
    getline (cin, addr);
    cout << "Hi, I am " << name; cout << ". I live at " << addr; cout << "." << endl;
    

    system ("pause");
    return 0;
}