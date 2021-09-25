#include<iostream>
using namespace std;

int main() {
    int array[100];
    int i, max, min, N;

    cout << "Masukkan banyak bilangan : ";
    cin >> N;

    cout << "Masukkan " << N << " bilangan tersebut : " << endl;
    for(i = 0; i < N; i++)
        cin >> array [i];

    max = array[0];
    min = array[0];

    for (i = 0; i < N; i++) {
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
    }

    cout << "Bilangan terbesar : " << max << endl;
    cout << "Bilangan terkecil : " << min;
}
