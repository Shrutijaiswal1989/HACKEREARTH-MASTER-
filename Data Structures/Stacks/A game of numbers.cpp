#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++)
        cin >> a[i];
    for(long long i = 0; i < n; i++)
    {
        int j, k, f = 0;
        for(j = i + 1; j < n; j++)
            if(a[j] > a[i])
                break;
        for(k = j + 1; k < n; k++)
            if(a[k] < a[j])
            {
                f++;
                break;
            }
            if(f>0)
                cout << a[k] << " ";
            else
                cout << "-1 ";
    }
    return 0;
}
