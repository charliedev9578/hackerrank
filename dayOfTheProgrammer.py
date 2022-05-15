#!/bin/python3

import math
import os
import random
import re
import sys

def dayOfProgrammer(year):
    daysOfMonthNoraml = [31 , 28 , 31, 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31]
    date = 256
    sumDate = 0
    monthCount = 0
    
    for x in daysOfMonthNoraml:
        if sumDate + x <= date:
            sumDate += x
            monthCount += 1
        else: break
    
    day = date - sumDate
    if(day == 0):
        day = daysOfMonthNoraml[monthCount - 1]
    
    if(sumDate < date): 
        monthCount += 1
        
    if year < 1918:
        if year % 4 ==0 and monthCount > 2:
            day -= 1
    elif year == 1918:
        if date > 31:
            day += 13
    else:
        if (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)) and monthCount > 2:
            day -= 1
    
    if(day == 0):
        day = daysOfMonthNoraml[monthCount - 1]
        monthCount -= 1
        
    return '{0:02d}.{1:02d}.{2}'.format(day , monthCount , year)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())

    result = dayOfProgrammer(year)

    fptr.write(result + '\n')

    fptr.close()
