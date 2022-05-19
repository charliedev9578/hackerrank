#!/bin/python3

import math
import os
import random
import re
import sys


def pageCount(n, p):
    evenUpperBound = n - 1 if n % 2 != 0 else n
    p = p if p <= evenUpperBound // 2 else n - p if n % 2 != 0 else n + 1 - p
    
    return p // 2

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    p = int(input().strip())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
