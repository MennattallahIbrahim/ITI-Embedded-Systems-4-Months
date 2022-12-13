#!/bin/python3

import math
import os
import random
import re
import sys
import string
# Complete the solve function below.
def solve(s):
    ss= string.capwords(s, ' ')
              
          
    return ss

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
'''Another answer 
# Complete the solve function below.
def solve(s):
    ss=''
    for i in s.split(' '):
        ss+=''.join(i.capitalize())
        ss+=' '
             
    return ss
'''
