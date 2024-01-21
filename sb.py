n = int(input())

r = list(map(int,input().split()))

s = 0
d = 0
l=0
if(n%2!=0):
    l = (n+1)/2
else:
    l = n/2


for i in range(0,int(n),1):
    #print(r)

    if(len(r) == 1 and i%2==0):
        s += r[0]
    elif(len(r) == 1 and i%2 != 0):
        d += r[0]

    elif(r[0] > r[-1] ):  
        if(i%2==0):
            s += r[0]
        else:
            d += r[0]
        
        r.pop(0)
        
    else:
        if(i%2==0):
            s += r[-1]
        else:
            d += r[-1]
        r.pop(-1)
       

        

print(s,d)
