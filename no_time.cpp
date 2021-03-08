#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, x;
    cin>>n>>h>>x;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.rbegin(), v.rend());
    // cout<<v[0]<<"\n";

    if (v[0] + x >= h)
    {
    	cout<<"YES\n";
    }
    else
    {
    	cout<<"NO\n";
    }
}