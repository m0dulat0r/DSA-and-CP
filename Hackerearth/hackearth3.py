triangles=int(input("Triangles : "))
dict1={}
count=0
if triangles>=1 and triangles<=10**5:
    for b in range(triangles):
        sides=input("Sides : ")
        list1=sides.split(" ")  
        
        list1.sort()
        
        dict1[b]=list1
    print(dict1)    
    for b in range(triangles):
        for c in range(b,triangles-1):
            if int(dict1[b][0])==int(dict1[c+1][0]) and int(dict1[b][1])==int(dict1[c+1][1]) and int(dict1[b][2])==int(dict1[c+1][2]):
                count+=1
                   
            else:
                continue    
    
    ans1=(((1+(8*count))**1/2)-1)/2
    print("No. of Unique Triangles are",triangles-ans1)    
else:
    pass        


