#!/bin/python3

import math
import os
import random
import re
import sys

def getTotalX(a, b):
    count = 0
    for x in range(max(a) , min(b) + 1):
        if len(list(filter(lambda y: x % y == 0 , a))) == len(a) and len(list(filter(lambda y: y % x == 0 , b))) == len(b):
            count += 1
    return count
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
