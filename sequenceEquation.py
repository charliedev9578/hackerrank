    #!/bin/python3

import math
import os
import random
import re
import sys

def permutationEquation(p):
    temp = []
    
    for x in range(len(p)):
        position = p.index(x + 1)
        temp.append(p.index(position + 1) + 1)
    return temp

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    p = list(map(int, input().rstrip().split()))

    result = permutationEquation(p)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

