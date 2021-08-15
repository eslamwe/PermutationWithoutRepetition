#include <iostream>
using namespace std;

void printArray(int a[], int n) {

    cout << endl;
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
}


void printPermutation(int a[], int cid, int n) {


    if (cid == n - 1) {
        printArray(a, n);
        return;
    }

    for (int i = cid;i < n;i++) {
        swap(a[i], a[cid]);
        printPermutation(a, cid + 1, n);
        swap(a[i], a[cid]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    printPermutation(arr, 0, n);

}

