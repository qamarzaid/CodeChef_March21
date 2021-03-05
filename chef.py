
# def seat(n,l):
# 	#print("T",t)
# 	#print(n)
# 	count=0
# 	for j in range (l):
# 		if j < l-1:
# 			if n[j]== '0' and n[j+1]== '1':
# 				count=count+1
# 	if n[0]=='1':
# 		count=count+1
# 	print(count) 
# t=int(input())

# for i in range(t):
# 	n=str(input())
# 	l=len(n)
# 	seat(n,l)

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