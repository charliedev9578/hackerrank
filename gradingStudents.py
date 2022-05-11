#!/bin/python3

import math
import os
import random
import re
import sys

def gradingStudents(grades):
    gradings = []
    
    for mark in grades:
        if mark < 38 or mark % 5 < 3:
            gradings.append(mark)
        else: gradings.append(((mark // 5) + 1) * 5)
    return gradings

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
