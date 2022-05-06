#!/bin/python3

import math
import os
import random
import re
import sys

def diagonalDifference(arr):
    length = len(arr)
    difference = 0
    
    for x in range(length):
        difference = difference + arr[x][x] - arr[x][length - 1 - x]
        
    if difference > 0:
        return difference
    else: return -difference

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
