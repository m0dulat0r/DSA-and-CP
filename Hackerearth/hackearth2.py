def fast():
    checkpoints=int(input("Enter the number of checkpoints : "))
    if checkpoints>=2 and checkpoints<=1000000:
        dom=input("Enter the speed at checkpoints :")
        brian=input("Enter the speed at checkpoints :")
        listdom=dom.split(' ')
        listbrian=brian.split(' ')
        list1=[]
        list2=[]
        for a in range((len(listdom))-1):
            list1.append(int(listdom[a+1])-int(listdom[a]))

        doms=max(list1)
    

        for b in range((len(listbrian))-1):
            list2.append(int(listbrian[b+1])-int(listbrian[b]))    

        brians=max(list2)  
        
        
        if doms>brians:
            print("Dom")
            print(doms)
        elif brians>doms:
            print("Brian")
            print(brians)
        else:
            print("Tie")
            print(brians)        



    else:
        pass

fast()    