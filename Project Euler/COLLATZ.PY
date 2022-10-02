count=0
list1=[]
for a in range(2,1000001):
    
    while a!=1:
        if a%2==0:
            a=a/2
            count+=1
        else:
            a=3*a+1
            count+=1
    list1.append(count)
    count=0    
maxi=list1.index(max(list1)) 
print(maxi+2)



            


