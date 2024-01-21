t = int(input())


for i in range(t):
    n = input()
    a=0
    b=0
    a, b = n[:1], n[1:]
    
    
    j = 1
    try:
        c=0
    
        while True:
            if(b[0]=='0'):
                a, b = n[:j], n[j:]
                if(int(b)==0):
                    break
                j+=1
                
            
            else:
                break
           
        
            
        if(int(a)<int(b)):
            print(a,b)
       
        elif(int(b)<=int(a)):
            print("-1")
        
    except IndexError:
        pass

