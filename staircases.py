#!/bin/python3

import math
import os
import random
import re
import sys



def staircase(n):
    for x in range(n):
        for i in range(n - 1 - x):
            print('' , end=' ')
        for j in range (n - 1 - x , n):
            print('#' , end='')
        print()

if __name__ == '__main__':
    n = int(input().strip())

    staircase(n)
