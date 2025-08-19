#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, head;
    cin >> n >> head;
    vector<int> a(n);
    vector<bool> visited(n);
    int sum = 0;
    int h = head;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int idx = -1;
        int min_dist = INT_MAX;
        for (int j = 0; j < n; j++)
        {

            if (!visited[j])
            {
                int dist = abs(h - a[j]);
                if (dist < min_dist)
                {
                    min_dist = dist;
                    idx = j;
                }
            }
        }
        visited[idx] = true;
        sum+=min_dist;
        h=a[idx];
    }


    cout << sum << endl;

}

