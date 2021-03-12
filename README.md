# CodeChef_March21
Solution of CodeChef March Challenge 2021


![](https://media.giphy.com/media/Wsju5zAb5kcOfxJV9i/giphy.gif)

### Problem no. 1: 
#### Chef & Group
``` 
There are N seats in a row. You are given a string S with length N; for each valid i, the i-th character of S is '0' if the i-th seat is empty or '1' if there is someone sitting in that seat.

Two people are friends if they are sitting next to each other. Two friends are always part of the same group of friends. Can you find the total number of groups?
```
##### Input
```
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.
Output
For each test case, print a single line containing one integer ― the number of groups.
```
##### Constraints
```
1≤T≤50
1≤N≤105
Subtasks
Subtask #1 (100 points): original constraints
```
##### Example Input
```
3
000
010
101
```
##### Example Output
```
0
1
2
```

##### Code Python
```python
def solve(n, l): 
	c = 0;
	for i in range(l):
		if i < l - 1:
			if (n[i] == '0' and n[i + 1] == '1'):
				c = c + 1
	if (n[0] == '1'):
		c = c + 1
	print(c)


t = int(input())

for i in range(t):
	n = input()
	l = len(n)
	solve(n, l)
```
##### Code C++

![](https://media.giphy.com/media/IbaHSmEeJGqk/giphy.gif)
### Problem no. 2: 
#### No Time To Wait

```
Only x hours are left for the March Long Challenge and Chef is only left with the last problem unsolved. However, he is sure that he cannot solve the problem in the remaining time. From experience, he figures out that he needs exactly H hours to solve the problem.

Now Chef finally decides to use his special power which he has gained through years of intense yoga. He can travel back in time when he concentrates. Specifically, his power allows him to travel to N different time zones, which are T1,T2,…,TN hours respectively behind his current time.

Find out whether Chef can use one of the available time zones to solve the problem and submit it before the contest ends.

Input
The first line of the input contains three space-separated integers N, H and x.
The second line contains N space-separated integers T1,T2,…,TN.
Output
Print a single line containing the string "YES" if Chef can solve the problem on time or "NO" if he cannot.

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
```
##### Constraints
```
1≤N≤100
1≤x<H≤100
1≤Ti≤100 for each valid i
Subtasks
Subtask #1 (100 points): original constraints
```
##### Example Input 1
```
2 5 3
1 2
```
##### Example Output 1
```
YES
```
##### Example Input 2
```
2 6 3
1 2
```
##### Example Output 2
```
NO
```
##### Code Python
```python
in_put=input()
text=in_put.split()
#print (text)
N=int(text[0])
H=int(text[1])
x=int(text[2])
#print(N,H,x)
time=input()
T=time.split()
b=0
for i in (T):
    a=int(i)
    b=max(b,a)
#print(b,"",x,"",H)
if x+b>=H:
    print("Yes")
else:
    print("No")
```
##### Code C++

```c++
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
```

![](https://media.giphy.com/media/3oz8xAFtqoOUUrsh7W/giphy.gif)
### Problem 3:
#### Space Arrays.
```
Finally, progress reached the Madoka family and she decided to play with her little sister in the sensational game Space Arrays.

The rules of the game are as follows:

Initially, a sequence a1,a2,…,aN is given.
The players alternate turns.
In each turn, the current player must choose an index i and increment ai, i.e. change ai to ai+1.
Afterwards, if there is no permutation p1,p2,…,pN of the integers 1 through N such that ai≤pi holds for each valid i, the current player loses.
Otherwise, the game continues with the next turn.
Madoka is asking you to help her ― tell her if the first player (the player that plays in the first turn) or second player wins this game if both play optimally.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers a1,a2,…,aN.
Output
For each test case, print a single line containing the string "First" if the first player wins or "Second" if the second player wins (without quotes).
```
##### Constraints
```
1≤T≤2⋅104
1≤N≤2⋅105
The sum of N over all test cases doesn't exceed 2⋅105
1≤ai≤N for each valid i
Subtasks
Subtask #1 (100 points): Original constraints
```

##### Example Input
```
4
4
1 2 3 3
4
1 1 3 3
5
1 2 2 1 5
3
2 2 3
```
##### Example Output
```
First
Second
Second
Second
```
##### Code in Python
```python

def solve(a, N):
    turn=0
    f = 0
    for i in range(0, N):
       # print("index",(i+1),"","ele", (a[i]))
        z=  (i + 1)-a[i]
       # print(z)
        if (z<0):
          # print("done")
           f =1
           break
       
        turn=turn+((i+1)-(a[i]))
        #print("flag",f,"","turn",turn)
      
    if f == 1:
        print("Second")
    else:
        if turn%2==1:
            print("First")
        
        else:
            print("Second")
           
T=int(input())
for i in range (T):
    N=int(input())
    A=input()
    a=A.split()
    a=sorted(a)
    for i in range(len(a)):
        a[i]=int(a[i])
   # print(a)
    solve(a, N)
```
##### Code in C++

```c++
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

```
![](https://media.giphy.com/media/RbDKaczqWovIugyJmW/giphy.gif)

### Problem 4:

#### College Life 4
```
Chef and N−1 more of his friends go to the night canteen. The canteen serves only three items (well, they serve more, but only these three are edible!), which are omelette, chocolate milkshake, and chocolate cake. Their prices are A, B and C respectively.

However, the canteen is about to run out of some ingredients. In particular, they only have E eggs and H chocolate bars left. They need:

2 eggs to make an omelette
3 chocolate bars for a chocolate milkshake
1 egg and 1 chocolate bar for a chocolate cake
Each of the N friends wants to order one item. They can only place an order if the canteen has enough ingredients to prepare all the ordered items. Find the smallest possible total price they have to pay or determine that it is impossible to prepare N items.
```
##### Input
```
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers N, E, H, A, B and C.
```
##### Output
```
For each test case, print a single line containing one integer ― the minimum cost of N items, or −1 if it is impossible to prepare N items.
```
##### Constraints
```
1≤T≤2⋅105
1≤N≤106
0≤E,H≤106
1≤A,B,C≤106
the sum of N over all test cases does not exceed 106
Subtasks
Subtask #1 (30 points): 1≤N≤100
Subtask #2 (70 points): original constraints
```
##### Example Input
```
3
5 4 4 2 2 2
4 5 5 1 2 3
4 5 5 3 2 1
```
##### Example Output
```
-1
7
4
```
##### Code Python
```python
def order(N,E,H,A,B,C,Z):
    cost=0
    for i in range(0,3):
       # print("cost", "", cost, '' ,"N",N)
        if (A==Z[i] and N>0):
            O=int(E/2)
            if O>N:
                O=N 
            cost=cost+O*A 
            E=int(E-(O*2))
            N=N-O
            
        if (B==Z[i] and N>0):
            CM=int(H/3)
            if CM>N:
                CM=N 
            cost=cost+CM*B
            H=H-(CM*3)
            N=N-CM 
            
        if (C==Z[i] and N>0):
            CC=min(E,H)
            if CC>N:
                CC=N 
            cost=cost+CC*C
            E=E-CC
            H=H-CC
            N=N-CC
    print(int(cost))    



def Possiblity(N,E,H,A,B,C):
    Cc=min(E,H)
    E=E-Cc
    H=H-Cc
    
    Cm=(int(H/3))
    H=H-(Cm*3)
    
    o=(int(E/2))
    E=E-(o*2)
    Final=Cc+Cm+o
    if(Final>=N):
      order(N1,E1,H1,A,B,C,Z)
    else:
        print("-1")
        
t=int(input())
while(t>0):
    s=input()
    s=s.split()
    t=t-1

    N=int(s[0])
    E=int(s[1])
    H=int(s[2])
    A=int(s[3])
    B=int(s[4])
    C=int(s[5])
    Z=[A,B,C]
    Z=sorted(Z)
    N1=N
    E1=E 
    H1=H
    
    Possiblity(N,E,H,A,B,C)
```

##### Code C++
```c++
#include<bits/stdc++.h>
using namespace std;
#define Int  long long int
#define endl "\n"

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Int  N, E, H, A, B, C;
		cin>>N>>E>>H>>A>>B>>C;
		vector<Int > ans;
		vector<Int > v;
		for(int i=0;i<=N+1;i++)
		{
			v.push_back(i);
		}
		for(Int  i =0; i<=N; i++)
		{
			Int  x1 = lower_bound(v.begin(), v.end(), (2*N-E-2*i))-v.begin();
			Int  x2 = upper_bound(v.begin(), v.end(), (H-3*i))-v.begin()-1;
			if(x2<x1 || x1==N+1)
			continue;
			if(x2==N+1 && x2+3*i>H)
			continue;
			Int  y;
			if(C>A)
			y = (x1<(N-i)?x1:(N-i));
			else
			y = (x2<(N-i)?x2:(N-i));
			Int  x = N-y-i;
			if(y+2*i>=2*N-E && y+3*i<=H)
			{
				ans.push_back(A*x+B*i+C*y);
			}
		}
		if(ans.size()==0)
		cout<<"-1"<<endl;
		else
		{
			Int  min = ans[0];
			for(Int  i = 0;i<ans.size();i++)
			{
				if(ans[i]<min)
				min = ans[i];
			}
			cout<<min<<endl;
		}
	}
	return 0;
}
```
![](https://media.giphy.com/media/wvQIqJyNBOCjK/giphy.gif)
### Problem 5:
#### Paparazzi Gennady

```
The young but promising paparazzi Gennady wants to finally become famous. To do this, he wants to take a picture of a new super star during her walk in the mountains.

It is known that the star's path in the mountains consists of N sections. For each valid i, the i-th section is a vertical half-open interval with coordinates x=i and y∈[0,hi).

For each valid i and j, our hero can take a picture of the star located in the i-th section of the walk when he is in the j-th section only if he can see the star ― that is, i<j and for each k (i<k<j), the half-open interval that makes up the k-th section must not intersect the line segment [(i,hi),(j,hj)].

Gennady is a paparazzi, not a programmer, so he asks you to determine the maximum distance from which he can take a picture of the star, which is the maximum value of j−i over all pairs (i,j). Help him become famous!
```
##### Input
```
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers h1,h2,…,hN.
Output
For each test case, print a single line containing one integer ― the maximum distance.
```
##### Constraints
```
1≤T≤104
2≤N≤5⋅105
1≤hi≤109 for each valid i
the sum of N over all test cases does not exceed 5⋅105
```
##### Subtasks
```
Subtask #1 (10 points): the sum of N over all test cases does not exceed 500
Subtask #2 (10 points): the sum of N over all test cases does not exceed 8,000
Subtask #3 (80 points): original constraints
```
##### Example Input
```
4
2
1 2
3
1 2 3
7
3 2 5 3 2 4 3
8
1 2 4 3 5 4 2 1
```
##### Example Output
```
1
2
3
2
```
##### Code
```c++
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int, int>> p, st;
        for(int i= 0;i<n;i++)
        {
            int v;
            cin>>v;
            p.push_back({i+1, v});
        }
        if(n==2)
        {
            cout<<"1\n";
            continue;
        }
        st.push_back(p[0]);
        st.push_back(p[1]);
        int ans = 1, sz = st.size();
        for(int i=2;i<n;i++)
        {
            while(st.size()>=2)
            {
                double s1 = ((double)st[sz-1].second -(double)st[sz-2].second)/((double)st[sz-1].first-(double)st[sz-2].first);
                double s2 = ((double)p[i].second-(double)st[sz-1].second)/((double)p[i].first-(double)st[sz-1].first);
                if(s1 <= s2)
                {
                    st.pop_back();sz--;
                }
                else break;
            }
            st.push_back(p[i]);sz++;
            ans = max(ans, st[sz-1].first-st[sz-2].first);
        }
        cout<<ans<<endl;
    }   
    return 0;
}
```
![](https://https://media.giphy.com/media/12BYUePgtn7sis/giphy.gif)
### Problem 6
#### Interesting XOR
```
You are given an integer C. Let d be the smallest integer such that 2d is strictly greater than C.

Consider all pairs of non-negative integers (A,B) such that A,B<2d and A⊕B=C (⊕ denotes the bitwise XOR operation). Find the maximum value of A⋅B over all these pairs.
```
##### Input
```
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer C.
Output
For each test case, print a single line containing one integer ― the maximum possible product A⋅B.
```
##### Constraints
```
1≤T≤105
1≤C≤109
Subtasks
Subtask #1 (30 points): 1≤C≤103
Subtask #2 (70 points): original constraints
```
##### Example Input
```
2
13
10
```
##### Example Output
```
70
91
```
##### Code
```c++
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
```
![](https://media.giphy.com/media/PiQejEf31116URju4V/giphy.gif)
