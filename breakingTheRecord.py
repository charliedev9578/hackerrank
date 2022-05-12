#!/bin/python3

import math
import os
import random
import re
import sys

def breakingRecords(scores):
    maxBreak = 0
    minBreak = 0
    min = scores[0]
    max = scores[0]
    
    new_scores = scores[1:]
    
    for val in new_scores:
        if val < min:
            minBreak += 1
            min = val
        elif val > max:
            maxBreak += 1
            max = val
        else: continue
    return [maxBreak , minBreak]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
