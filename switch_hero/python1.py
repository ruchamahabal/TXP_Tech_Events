'''Write a function sumprimes(l) that takes as input a list of integers l and returns the sum of all the prime numbers in l.'''
"""Testcases are shown below"""
def sumprimes(l):
    result = []
    flag=0
    for i in l:
        for j in range(2, i):
            if j%i!=0:
                flag==1
            else:
                flag==0
                break;
        if flag==1 or i==2:
            result.append(i)
    return result

# Testcasess
print(sumprimes([3,3,1,13]))
'''expected output: 19 '''
print(sumprimes([2,4,6,9,11]))
'''expected output: 13 '''
print(sumprimes([-3,1,6]))
''' expected output: 0'''
