a=2**1000
b=str(a)
l1=[]
for a in range(len(b)):
    l1.append(b[a])

sum=0
for a in range(len(l1)):
    sum+=int(l1[a])

print(sum)    
