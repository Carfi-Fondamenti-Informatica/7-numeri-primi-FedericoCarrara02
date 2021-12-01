#include <iostream>
using namespace std;
#include "lib.h"
#include <string>

int main() {
    int i = 0;
    int p;
    string b = "False";
    cin >> i;
    p = i-1;

    string check = n_primo(i, p, b);
    if (check.compare("Vero") == 0) {
        cout << "numero primo" << endl;
    }
    else {
        cout << "numero non primo" << endl;
    }

    return 0;
}

