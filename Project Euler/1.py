sums=0
bum=0
bums=0
for x in range(0,1000):
    if x%3==0:
        sums+=x
    else:
        continue
for y in range (0,1000):
    if y%5==0:
        bum+=y
    else:
        continue    
for z in range (0,1000):
    if z%15==0:
        bums+=z
    else:
        continue      
print(sums+bum-bums)    