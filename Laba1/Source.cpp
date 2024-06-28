#include "Header.h"


void func(int a, int b) {
    if (b != 0) {
        cout << a + b << " " << a - b << " " << a * b << " " << a / b << endl;
    }
    else {
        cout << a + b << " " << a - b << " " << a * b << " " << "Error" << endl;
    }
}
