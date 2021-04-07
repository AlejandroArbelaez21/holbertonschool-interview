#!/usr/bin/python3
import math
"""
0. Pascal's Triangle
"""


def combination(n, r):
    """ correct calculation of combinations, n choose k """ 
    return int((math.factorial(n)) / ((math.factorial(r)) * math.factorial(n - r)))


def pascal_triangle(n):
    """ returns a list of lists of integers representing the Pascal’s triangle """
    result = []
    if n <= 0:
        return result
    else:
        for count in range(n): 
            row = []
            for element in range(count + 1): 
                row.append(combination(count, element))
            result.append(row)
        return result
    