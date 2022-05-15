#!/bin/python3

import math
import os
import random
import re
import sys

def sockMerchant(n, ar):
    checked = []
    sumOfPairs = 0
    totalCount = 0
    
    for x in ar:
        if n > totalCount and x not in checked:
            totalCount += ar.count(x)
            sumOfPairs += ar.count(x) // 2
            checked.append(x)
    return sumOfPairs
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
