#!/bin/python3

import math
import os
import random
import re
import sys

def birthday(s, d, m):
    count = 0
    
    if m == len(s):
        sum = 0
        for x in s:
            sum += x
        if sum == d: count += 1
    else:
        for x in range(len(s) - m + 1):
            sum = 0
            for y in range(x , x + m):
                sum += s[y]
            if sum == d: count += 1
    
    return count
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    first_multiple_input = input().rstrip().split()

    d = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    result = birthday(s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()
