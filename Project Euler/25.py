#Fibonacci
list1=[]
count=0
while  True:
    a=1
    b=1
    c=a+b
    count+=1
    a,b=b,c

    if len(str(c))==1000:
        print(count)
        break
    else:
        continue

nhi=input()