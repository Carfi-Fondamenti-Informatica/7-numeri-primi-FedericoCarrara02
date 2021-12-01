#include "lib.h"
#include <string>
using namespace std;

string n_primo (int a, int p, string b) {
    if (a < 2) {
        return "False";
    }

    int resto = a%p;
        if (resto != 0) {
            p--;
            return n_primo(a, p, b);
        }
        else {
            if (p == 1) {
                return "Vero";
            } else {
                return "False";
            }
        }
}

