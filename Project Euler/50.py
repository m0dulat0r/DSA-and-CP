l=[]
l2=[]
for j in range(2,10000):
    for i in range(2,j//2+1):
        if (j%i) == 0:
            
            break
    else:
        
        l.append(j)

       

for a in range(len(l)):
    sum=0
    for b in range(a):
        sum+=l[b]
    for i in range(2,sum):
        if (sum % ((i//2)+1)) == 0:
            break
    else:
       l2.append(sum)

print(l2)       
      



