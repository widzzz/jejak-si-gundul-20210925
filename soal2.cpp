#include<iostream>
using namespace std;

int main(){
    int i = 1, N, X;

    cout << "Masukkan nilai N : ";
    cin >> N;

    for (i=1; i<=10; i++){
        X = i * N;
        cout << i << " * " << N << " = " << X << endl;
    }
}
