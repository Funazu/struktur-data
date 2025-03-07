#include <iostream>
using namespace std;

int main() {
    int hasil;
    for (int i = 1; i <= 10; i++) {
        hasil = 1; 
        for (int j = 0; j < i; j++) { // untuk menghitung pangkat
            hasil *= i;
        }
        cout << i << " pangkat " << hasil << endl;
    }
    return 0;
}
