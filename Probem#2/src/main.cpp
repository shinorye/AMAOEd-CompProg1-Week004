#include <cstudio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    int db, product;
    cout << "Enter Daily Budget: ";
    cin >> db;
    product = db * db;
    cout << "Product: " << product << endl;

    system ("pause");
    return 0;
}