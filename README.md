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
