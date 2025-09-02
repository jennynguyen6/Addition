#include <iostream>
#include <cstdlib>

using namespace std;

int AddUp(int A[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }
    return sum;
}
int main (int argc, char* argv[]) {
    int n = argc-1;
    int A[10];

    for (int i=0; i<n; i++) {
        A[i] = atoi(argv[i+1]);
    }
    int total = AddUp(A,n);
    cout << total << endl;
    return 0;
}
