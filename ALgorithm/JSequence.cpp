#include <bits/stdc++.h>
using namespace std;

void jobScheduling(char id[], int deadline[], int profit[], int n) {
    // Sort jobs by profit in descending order
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (profit[i] < profit[j]) {
                swap(profit[i], profit[j]);
                swap(deadline[i], deadline[j]);
                swap(id[i], id[j]);
            }
        }
    }

    int result[n], maxProfit = 0;
    bool slot[n];

    for (int i = 0; i < n; i++) {
        slot[i] = false;
    }

    for (int i = 0; i < n; i++) {
        for (int j = min(n, deadline[i]) - 1; j >= 0; j--) {
            if (!slot[j]) {
                result[j] = i;
                slot[j] = true;
                maxProfit += profit[i];
                break;
            }
        }
    }

    cout << "Maximum profit sequence of jobs: ";
    for (int i = 0; i < n; i++) {
        if (slot[i]) {
            cout << id[result[i]] << " ";
        }
    }
    
    cout << endl << "Maximum profit: " << maxProfit << endl;
}

int main() {
    char id[] = {'1', '2', '3', '4', '5'};
    int deadline[] = {2, 1, 2, 3, 1};
    int profit[] = {90, 80, 100, 50, 40};

    int n = sizeof(id) / sizeof(id[0]);
    
    jobScheduling(id, deadline, profit, n);

    return 0;
}
