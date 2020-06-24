t = int(input())
import math
delay = []

for _ in range(t):
	n, k = input().split()
	n = int(n)
	k = int(k)
	s = input()

	firstOne = -1
	for i in range(n):
		if s[i] == '1':
			firstOne = i
			break 
	if(firstOne == -1):
		print( max(1, math.ceil( (n)/(k+1) )))
		continue 
	trail = []
	cnt = 0
	for i in range(firstOne+1, n):
		if s[i] == '0':
			cnt += 1
		if(i < n-1 and s[i+1] == '1' and s[i] == '0' ):
			trail.append(cnt)
			cnt = 0
	
	ans = 0
	ans += max(0, math.ceil( (firstOne-k)/(k+1) ))
	
	ans += max(0, math.ceil( (cnt - k) /(k+1)) )
	
	for t in trail:
		ans += max(0, math.ceil((t - 2*k)/(k+1))  )

	print(ans)

	