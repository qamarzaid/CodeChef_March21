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
void Order(int N,int E,int H,int A,int B,int C,int Z[])
{
	int cost=0;
    for(int i=0;i<3;i++)
    {
       // print("cost", "", cost, '' ,"N",N)
        if (A==Z[i] && N>0)
        {
            int O=(E/2);
            if( O>N)
            {
                O=N ;
            }
            cost=cost+(O*A); 
            E=E-(O*2);
            N=N-O;
        }    
        if (B==Z[i] && N>0)
        {
            int CM=(H/3);
            if (CM>N)
             {   
             	CM=N; 
             }
            cost=cost+(CM*B);
            H=H-(CM*3);
           N=N-CM ;
          }  
        if (C==Z[i] && N>0)
           { 
           	int CC=min(E,H);
            if (CC>N)
              {  CC=N;
              } 
            cost=cost+CC*C;
            E=E-CC;
            H=H-CC;
            N=N-CC;
        }
    }
    cout<<cost<<endl; 


}
void possibility(int N,int E,int H,int A,int B,int C,int Z[])
{
int N1=N;
int E1=E;
int H1=H;
int A1=A;
int B1=B;
int C1=C;
	int Cc=min(E,H);
	E=E-Cc;
	H=H-Cc;

	int Cm=(H/3);
	H=H-(Cm*3);

	int o=(E/2);
	E=E-(o*2);

	int Final=Cc+Cm+o;
	if(Final>N)
	{
	//	cout<<"Done"<<endl;
		Order( N1, E1, H1, A1, B1, C1, Z);
	}
	else{ cout<<"-1"<<endl;}
}


int main()
{ 
ios::sync_with_stdio(0);
cin.tie(0);

int T,N,E,H,A,B,C;
cin>>T;
int z[3];
while(T--> 0)
{
cin>>N>>E>>H>>A>>B>>C;

 z[0]= A;
 z[1] = B;
 z[2] = C;
sort(z,z+3);
// for(int i=0;i<3;i++)
// {
// 	cout<<z[i]<<" ";
// }
possibility( N, E, H, A, B, C,z);

}

return 0;
}


    
    
        

```
![](https://media.giphy.com/media/PiQejEf31116URju4V/giphy.gif)
