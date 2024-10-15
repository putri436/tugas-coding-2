#include <iostream>
using namespace std;

int main()
{
    int data, nilaiGanjil = 0, nilaiGenap = 0;
    cout << "Masukkan jumlah data: "; cin >> data;

    for (int a = 0; a <= data; a++) {
        if (a % 2 == 0) {
            nilaiGenap += a;
        }
        else {
            nilaiGanjil += a;
        }
    }

    cout << "Jumlah total bilangan ganjil: " << nilaiGanjil;
    cout << "\nJumlah total bilangan genap: " << nilaiGenap;

    return 0;
}