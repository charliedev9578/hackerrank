#!/bin/python3

import math
import os
import random
import re
import sys


def pickingNumbers(a):
    maxCount = 0
    
    for x in range(len(a)):
        tempCount = 0
        tempList = []
        for y in range(len(a)):
            if int(abs(a[x] - a[y])) <= 1:
                tempCount += 1
                tempList.append(a[y])
        
        tempList.sort()
        
        minElCount = tempList.count(tempList[0])
        maxElCount = tempList.count(tempList[len(tempList) - 1])
        
        if tempList[len(tempList) - 1] - tempList[0] > 1:
            tempCount = tempCount - minElCount if minElCount < maxElCount else tempCount - minElCount
            
        if tempCount > maxCount:
            maxCount = tempCount
    
    return maxCount

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
