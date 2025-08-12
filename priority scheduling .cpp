#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int id[100], at[100], bt[100], pr[100], wt[100], tat[100], ct[100], comp[100];
    for (int i = 0; i < n; i++) {
        id[i] = i + 1;
        cin >> pr[i] >> at[i] >> bt[i];
        comp[i] = 0;
    }
    int time = 0, done = 0;
    float total_wt = 0, total_tat = 0;
    while (done < n) {
        int idx = -1, bestPr = 999999;
        for (int i = 0; i < n; i++) {
            if (at[i] <= time && comp[i] == 0 && pr[i] < bestPr) {
                bestPr = pr[i];
                idx = i;
            }
        }
        if (idx != -1) {
            wt[idx] = time - at[idx];
            time += bt[idx];
            ct[idx] = time;
            tat[idx] = wt[idx] + bt[idx];
            comp[idx] = 1;
            done++;
            total_wt += wt[idx];
            total_tat += tat[idx];
        } else time++;
    }
    cout << "Process\tAT\tBT\tPriority\tCT\tWT\tTAT\n";
    for (int i = 0; i < n; i++)
        cout << "P" << id[i] << "\t" << at[i] << "\t" << bt[i] << "\t" << pr[i] << "\t\t" << ct[i] << "\t" << wt[i] << "\t" << tat[i] << "\n";
    cout << total_wt / n << "\n" << total_tat / n << "\n";
}

