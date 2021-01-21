#!/usr/bin/python3
"""
Test 0x16 - Rotate 2D Matrix
"""


def rotate_2d_matrix(matrix):
    """ rotate a matrix 2D """
    matrix_copy = matrix.copy()

    for i in range(len(matrix[0])):
        temp_array = []
        for row in reversed(matrix_copy):
            temp_array.append(row[i])
        matrix[i] = temp_array
