#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int head;
    cin >> head;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int sum=0;
    int h=head;

    for(int i=0;i<n;i++)
    {

       if(h!=a[i])
       {
           sum+=abs(a[i]-head);
           head=a[i];

       }
    }


    cout << sum << endl;
}
