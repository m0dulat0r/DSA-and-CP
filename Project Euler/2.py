a=1
b=2
sums=0
c=0
while c<4000000:
    c=a+b
    a=b
    b=c
    if c%2==0:
        sums+=c
    else:
        continue    
print(sums)    
