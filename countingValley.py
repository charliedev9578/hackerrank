#!/bin/python3

import math
import os
import random
import re
import sys


def countingValleys(steps, path):
    valleyCount = 0
    isPassedSeaLevelBelow = False
    seaLevel = 0
    
    for letter in path:
        if seaLevel == 0 and letter == 'D':
            isPassedSeaLevelBelow = True
        
        seaLevel = seaLevel + 1 if letter == 'U' else seaLevel - 1
        
        if seaLevel == 0 and isPassedSeaLevelBelow:
            valleyCount += 1
            isPassedSeaLevelBelow = False
    
    return valleyCount

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    steps = int(input().strip())

    path = input()

    result = countingValleys(steps, path)

    fptr.write(str(result) + '\n')

    fptr.close()
