#!/bin/python3

import math
import os
import random
import re
import sys

def saveThePrisoner(n, m, s):
    remainder = m % n
    lastPosition = 0
    if(s > 1):
        lastPosition = remainder + s - 1
    else:
        lastPosition = remainder + n
    
    if lastPosition > n:
        lastPosition = lastPosition - n
    
    return lastPosition

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        m = int(first_multiple_input[1])

        s = int(first_multiple_input[2])

        result = saveThePrisoner(n, m, s)

        fptr.write(str(result) + '\n')

    fptr.close()
