#!/bin/python3

import math
import os
import random
import re
import sys

def plusMinus(arr):
    numOfPos = 0
    numOfNeg = 0
    numOfZero = 0
    
    for x in arr:
        if x > 0:
            numOfPos += 1
        elif x < 0: numOfNeg += 1
        else: numOfZero += 1
    
    print('{0:.6f}'.format(numOfPos / len(arr)))
    print('{0:.6f}'.format(numOfNeg / len(arr)))
    print('{0:.6f}'.format(numOfZero / len(arr)))
    

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
