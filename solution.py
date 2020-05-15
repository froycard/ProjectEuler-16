def powerOfTwo(n):
    if n == 1:
        return 2;
    return 2*powerOfTwo(n-1)

print(sum([ord(i)-48 for i in list(str(powerOfTwo(1000)))]))
