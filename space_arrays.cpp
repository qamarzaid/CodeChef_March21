#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  freopen("input.txt", "w", stdin);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int turn=0;
	    int host=0;
	    for (int i=0;i<n;i++)
	    {
	        if(i+1-a[i]<0)
	        {
	        host=1;
	        break;
	        }
	    turn=turn+(i+1 - a[i]);
      cout<<"turn ="<<turn<<" flag= "<<host;
	   	}
	if (host==1)
	{
	    cout<<"Second"<<endl;
	    
	}
	else
	{
	    if(turn%2==1)
	    {
	        cout<<"First"<<endl;
	        
	    }
	else
	{
	    cout<<"Second"<<endl;
	    
	}
	}
	
	}
	
	return 0;
}

