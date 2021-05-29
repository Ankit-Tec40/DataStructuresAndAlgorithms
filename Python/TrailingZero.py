def noofzero(n):
    res=0;
    for i in range(5,n+1):
        res=res+int(n/i);
        i=i*5
    return res

print(noofzero(5))