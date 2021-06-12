def count(n):
    res=0
    count = 0
    while (n>0):
        count += n & 1
        n >>= 1
    return count


print(count(5),'hai')
