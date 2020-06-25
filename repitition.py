s=input()
first=0
length=int(len(s))
maxcount=0
character='a'
#print(type(length))
#print(length)
for i in range(1, length):
	if i==length-1:
		if s[i]==s[i-1]:
			diff=i-first
			if diff>maxcount:
				maxcount=diff
	else:
		if s[i]!=s[i-1]:
			diff=i-first
			if diff>maxcount:
				maxcount=diff
				character=s[i-1]
			first=i
		else:
			continue
print(maxcount, character)
