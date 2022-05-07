#!/bin/python3

import math
import os
import random
import re
import sys

def miniMaxSum(arr):
    minSum = sum(arr) - max(arr)
    maxSum = sum(arr) - min(arr)
    
    print('{0} {1}'.format(minSum , maxSum))
    
    

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
