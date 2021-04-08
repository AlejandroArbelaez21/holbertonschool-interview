#!/usr/bin/python3
"""
0. Pascal's Triangle
"""


def pascal_triangle(n):
    """ returns a list of lists of integers representing Pascal’s triangle """
    result = []
    if n <= 0:
        return result
    else:
        for count in range(n):
            row = [1]
            for element in range(count):
                row.append(sum(result[-1][element:element+2]))
            result.append(row)
        return result
    