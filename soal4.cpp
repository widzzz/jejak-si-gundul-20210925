#include<iostream>
using namespace std;

int main() {
    int array[100], i, N;
    float sum, rata;

    cout << "Masukkan banyak bilangan : ";
    cin >> N;

    cout << "Masukkan " << N << " bilangan tersebut : " << endl;

    for (i = 0; i < N; i++){
        cin >> array [i];
    }

    sum = 0;

    for (i = 0; i < N; i++) {
        sum = sum + array[i];
    }

    rata = sum / N;
    cout << "Rata-rata adalah " << rata;
}
