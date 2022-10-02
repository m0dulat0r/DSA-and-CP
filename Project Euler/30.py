def main():
    LIST1=[]


    for a in range(1000,10000):
        l=list(str(a))
        if a==((int(l[0])**5)+(int(l[1])**5)+(int(l[1])**5)+(int(l[1])**5)):
            LIST1.append(a)
            
        else:
            pass    
            
    print(LIST1)  


          

if __name__=='__main__':
    main()
