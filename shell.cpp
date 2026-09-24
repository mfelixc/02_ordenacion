#include <iostream>
using namespace std;

void ShellSort(int A[], int n) {
    int k = n / 2; 
    while (k > 0) {
        for (int i = k; i < n; i++) {
            int aux = A[i];
            int j = i;
            while (j >= k && A[j - k] > aux) {
                A[j] = A[j - k];
                j -= k;
            }
            A[j] = aux;
        }
        k /= 2; 
    }
}

int main() {
    int A[10] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4};
    int n = sizeof(A) / sizeof(A[0]);
    ShellSort(A, n);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
