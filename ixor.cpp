#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
int main() {
	int t; cin>>t;
	while (t--)
	{
	    int c, a=0, b=0;
	    const int bit =64; cin>>c;
	    string b_c=bitset<bit>(c).to_string();
	    string b_a=bitset<bit>(a).to_string();	    
	    string b_b=bitset<bit>(b).to_string();
	    b_a[b_c.find('1')]='1';
	    for(int i=b_c.find('1')+1;i<bit;i++)
	    {
	        b_b[i]='1';
	        if(b_c[i]=='0')
	        {
	            b_a[i]='1';
	        }
	    }
        cout<<stoi(b_a, nullptr, 2)*stoi(b_b, nullptr, 2)<<endl;

	}
	return 0;
}
