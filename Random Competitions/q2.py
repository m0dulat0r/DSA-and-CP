a=int(input(""))

for i in range(a):
    input_string=input("")
    input_no=int(input(""))
    flag=0
    adj=1
    new_str=""
    for j in range(len(input_string)-1):
        
        if(input_string[j]==input_string[j+1]):
            adj+=1;
        if(adj==input_no):
            adj=1
            flag=1
            j+=1

        if(flag==0):
            new_str=new_str+input_string(j)


