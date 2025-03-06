#include <iostream>
using namespace std;

int main() {
    cout << "Menampilkan pangkat 1 sampai 10:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        int hasil = i * i; // Menghitung pangkat
        cout << i << " pangkatnya = " << hasil << endl;
    }

    return 0;
}
