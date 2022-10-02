import math

l=math.factorial(100)
d=str(l)
list1=[]
sum=0
for a in range(len(d)):
    list1.append(int(d[a]))

for a in range(len(list1)):
    sum+=list1[a]

print(sum)    

print(d)