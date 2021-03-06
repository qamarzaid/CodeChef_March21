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
