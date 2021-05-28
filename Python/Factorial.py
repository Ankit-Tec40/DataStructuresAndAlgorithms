def fact1(n):
    res=1
    for i in range (2,n+1):
        res=res*i
    return res;
    
def fact2(n):
    if n==0:
        return 1
    else:
        return(n*fact2(n-1))

print(fact1(4))
print(fact2(4))
