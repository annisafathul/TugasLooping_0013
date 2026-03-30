#include <iostream>
using namespace std;

int n;
int pilihan;
bool isPrima(int x) {
    if (x <= 1) return false;
    int i = 2;
    while (i <= x / 2) {
        if (x % i == 0) return false;
        i++;
    }
    return true;
}