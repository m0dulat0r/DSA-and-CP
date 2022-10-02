#Pythogarean Triplet Checker
for a in range(200,1000):
    for b in range(200,1000):
        for c in range(200,1000):
            if a+b+c==1000:
                if (a*a)==(b*b)+(c*c):
                     print(a,b,c,a*b*c)
                     break
            else:
                continue    
#SHITTTTTTT. YEH BHI CHAL GAYA :O
