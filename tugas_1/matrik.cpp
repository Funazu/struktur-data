#include <iostream> 
using namespace std;

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2]; // Untuk menyimpan hasil penjumlahan

    cout << "Hasil penjumlahan matriks:" << endl;

    // Menjumlahkan matriks A dan B
    for (int b = 0; b < 2; b++) {
        for (int k = 0; k < 2; k++) {
            C[b][k] = A[b][k] + B[b][k];
            cout << C[b][k] << " "; // Menampilkan hasil
        }
        cout << endl; // Pindah baris setelah mencetak satu baris matriks
    }

    return 0;
}
