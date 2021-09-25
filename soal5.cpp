#include<iostream>
using namespace std;

int main() {
    int bilangan[10], i, arrGenap[10], hitungGenap = 0;

    cout << "Masukkan 10 bilangan :" << endl;

    for (i = 0; i < 10; i++) {
        cin >> bilangan[i];
    }

    for (i = 0; i < 10; i++) {
        if (bilangan[i] % 2 == 0)
            arrGenap[hitungGenap++] = bilangan[i];
    }

    cout << "Bilangan genap adalah : ";
    for(i = 0; i < hitungGenap; i++){
        cout << arrGenap[i] << " ";
    }
}
