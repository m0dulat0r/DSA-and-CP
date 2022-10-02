totaltestcases=int(input(""))
thegodlist=[]
for b in range(totaltestcases):
    
    finalsum1=0
    finalsum2=0
    costofballoons=input("")
    listforcostofballoons=costofballoons.split(" ")
    # finalcostofballoons=[(int(listforcostofballoons[0])),(int(listforcostofballoons[1]))]

    noofparticipants=int(input(""))
    # scorelist=[]
    for a in range(noofparticipants):
        winorlose=input("")
        listofwinlose=winorlose.split(" ")
        # finallistofwinorlose=[(int(listofwinlose[0])),(int(listofwinlose[1]))]
        # scorelist.append(finallistofwinorlose)

        finalsum1=finalsum1+(int(listforcostofballoons[0])*int(listofwinlose[0]))+(int(listforcostofballoons[1])*int(listofwinlose[1]))
        finalsum2=finalsum2+(int(listforcostofballoons[1])*int(listofwinlose[0]))+(int(listforcostofballoons[0])*int(listofwinlose[1]))

    
    if finalsum2>finalsum1:
        print(finalsum1)
    else:
        print(finalsum2)    