def ispal1(n):
    temp=n
    rev=0
    while(temp!=0):
        ld=temp%10
        rev=rev*10+ld
        temp=int(temp/10)
    return(rev==n)

def ispal2(n):
    no=str(n)
    rev=no[::-1]
    return(rev==n)



print(ispal1(1233421))
print(ispal2(1233421))