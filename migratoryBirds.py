#!/bin/python3

import math
import os
import random
import re
import sys

def migratoryBirds(arr):
    list = []
    
    for x in range(1 , 6):
        list.append(arr.count(x))
    return list.index(max(list)) + 1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
