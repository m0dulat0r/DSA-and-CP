
a=int(input(""))

for i in range(a):
    summ=0
    data={}
    arr=[]

    no_of_aliens_asked=int(input(""))
    for j in range(no_of_aliens_asked):
        d=int(input(""))
        if(d in data.keys()):

            data[d]+=1;
        else:
            data.update({d:1})

        if(data[d]==1):
            arr.append(d)

    for m in range(len(data)):
        if(arr[m]>data[arr[m]]):
            summ=summ+1+arr[m]
        else:
            if(data[arr[m]]%arr[m]==0):
                mul=data[arr[m]]/arr[m]
                new_sum=mul*(1+arr[m])
                summ+=new_sum
            else:
                mul=int(data[arr[m]]//arr[m])
                new_sum=(mul+1)*(1+arr[m])
                summ+=new_sum
    print(summ)
    