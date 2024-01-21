t = int(input())

for i in range(t):
    d = int(input())
    s = list(map(int,input().split()))
    m = list(map(int,input().split()))
    b = list(map(int,input().split()))

    if(max(s)>=max(m) and max(s)>=max(b)):
        s_i = s.index(max(s))
        m.pop(s_i)
        b.pop(s_i)
        if(max(m)>=max(b)):
            m_i = m.index(max(m))
            b.pop(m_i)
        else:
            b_i = b.index(max(b))
            m.pop(b_i)
        
    elif(max(m)>=max(s) and max(m)>=max(b)):
        m_i = m.index(max(m))
        s.pop(m_i)
        b.pop(m_i)
        if(max(s)>=max(b)):
            s_i = s.index(max(s))
            b.pop(s_i)
        else:
            b_i = b.index(max(b))
            s.pop(b_i)
    elif(max(b)>=max(s) and max(b)>=max(m)):
        b_i = b.index(max(b))
        s.pop(b_i)
        m.pop(b_i)
        if(max(s)>=max(m)):
            s_i = s.index(max(s))
            m.pop(s_i)
        else:
            m_i = m.index(max(m))
            s.pop(m_i)
 
    print(max(s)+max(m)+max(b))

    
        

