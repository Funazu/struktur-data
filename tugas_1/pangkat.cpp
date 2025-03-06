#include <iostream>
using namespace std;

int main() {
    cout << "Menampilkan pangkat 2 dari 1 sampai 10:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        int hasil = i * i; // Menghitung pangkat 2 secara manual
        cout << i << " pangkat 2 = " << hasil << endl;
    }

    return 0;
}
