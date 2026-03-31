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
bool isFibonacci(int x) {
    int a = 0, b = 1, c;
    while (a <= x) {
        if (a == x) return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> n;
}
void tampilPrima() {
    if (isPrima(n))
        cout << "Bilangan Prima\n";
    else
        cout << "Bukan Prima\n";
}
void tampilFibonacci() {
    if (isFibonacci(n))
        cout << "Fibonacci\n";
    else
        cout << "Bukan Fibonacci\n";
}
void menu() {
    cout << "\n===== MENU =====\n";
    cout << "1. Cek Prima\n";
    cout << "2. Cek Fibonacci\n";
    cout << "0. Keluar\n";
}
int main() {
    while (true) {
        menu();
        cout << "Pilih menu: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                inputAngka();
                tampilPrima();
                  
}

}