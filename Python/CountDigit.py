def noofdigit(n):
    if n==0:
        return 0;
    else:
        return(1+noofdigit(int(n/10)))

print(noofdigit(1234567890))