#include <iostream>
using namespace std;

int intercambioderecho (int A[], int n){ 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (A[j] > A[j + 1]) {
                int aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
    return 0;
}

int main(){
    int A[5] = {5, 4, 3, 2, 1};
    intercambioderecho(A, 5);
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
    return 0;
}