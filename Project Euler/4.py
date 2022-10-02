list1=[]
for l in range(999,800,-1):
    for d in range(999,800,-1):                                                   
        n=l*d 
        temp=n
        rev=0
        while(n>0):
           dig=n%10
           rev=rev*10+dig
           n=n//10
        if(temp==rev):
            list1.append(rev) 

            
        else:
            continue
print(max(list1))
 #Its frikin Self-made codeeeeeeeeeeeee
#and it worksss
#omggggg

#python
flag=0
for i in range(999,99,-1):
    for j in range(999,99,-1):
        a=str(i*j)
        if a==a[::-1]:
            a=int(a)
            if flag<a:
                flag=a
print(flag)

#(Its cool)







