#!/usr/bin/python3
def minOperations(n):
    numH = 1
    cp = 1
    mult = 0

    if n <= numH or type(n) is not int:
        return 0
    else:
        while numH < n:
            if n % numH == 0:
                cp = numH
                numH += cp
                mult += 2
            else:
                numH += cp
                mult += 1
        return mult
