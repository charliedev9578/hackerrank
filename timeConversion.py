#!/bin/python3

import math
import os
import random
import re
import sys



def timeConversion(s):
    hour = s[0:2]
    duration = s[len(s) - 2]
    
    if duration == 'A' and int(hour , base=10) == 12:
        return '00' + s[2:len(s) - 2]
    elif duration == 'A' and int(hour , base=10) != 12:
        return s[0:len(s) - 2]
    elif duration == 'P' and int(hour , base=10) == 12:
        return s[0:len(s) - 2]
    else:
        return '{}'.format(int(s[0:2] , base=10) + 12) + s[2:len(s) - 2]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
