sums=0

for x in range(2,2000000):
    for y in range(2,x):
        if x%y!=0:
            sums+=x
        else:
            continue
print(sums)        
