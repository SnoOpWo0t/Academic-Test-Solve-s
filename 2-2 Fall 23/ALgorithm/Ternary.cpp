#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int siz = sizeof(a) / sizeof(a[0]), low = 0, high = siz - 1, mid1, mid2;
    int k;
    cin >> k;
    while (low <= high) {
        mid1 = low + (high - low) / 3;
        mid2 = high - (high - low) / 3;
        if (a[mid1] == k) {
            cout << "Found at " << mid1 + 1 << endl;
            break;
        } else if (a[mid2] == k) {
            cout << "Found at " << mid2 + 1 << endl;
            break;
        } else if (a[mid1] > k) {
            high = mid1 - 1;
        } else if (a[mid2] < k) {
            low = mid2 + 1;
        } else {
            low = mid1 + 1;
            high = mid2 - 1;
        }
    }
    return 0;
}
