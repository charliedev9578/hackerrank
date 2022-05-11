#!/bin/python3

import math
import os
import random
import re
import sys

def countApplesAndOranges(s, t, a, b, apples, oranges):
    appleCount = 0
    orangeCount = 0
    
    for x in apples:
        if x <= 0:
            continue
        elif s <= x + a <= t:
            appleCount += 1
    
    for x in oranges:
        if x >= 0:
            continue
        elif s <= x + b <= t:
            orangeCount += 1
            
    print(appleCount)
    print(orangeCount)
            

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    s = int(first_multiple_input[0])

    t = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    a = int(second_multiple_input[0])

    b = int(second_multiple_input[1])

    third_multiple_input = input().rstrip().split()

    m = int(third_multiple_input[0])

    n = int(third_multiple_input[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
