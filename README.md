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

##### Code
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
##### Code
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
