while 1:
    f=int(input("from:"))
    t=int(input("to:"))
    print(f," ",t," ",end="")
    m=1
    for i in range(f,t+1):
        le=1;
        while i!=1:
            if i%2==1:
                i=3*i+1
                le+=1
            else:
                i/=2
                le+=1
        if le>m:
            m=le
    print(m)