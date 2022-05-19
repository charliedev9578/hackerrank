#!/bin/python3

import math
import os
import random
import re
import sys


def utopianTree(n):
    height = 0
    
    for x in range(n + 1):
        height = height + 1 if x % 2 == 0 else height * 2
    
    return height

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = utopianTree(n)

        fptr.write(str(result) + '\n')

    fptr.close()
