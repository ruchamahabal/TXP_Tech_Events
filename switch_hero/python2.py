'''Write a python function char_count(s) to take a string as input and return a python dictionary which stores each character in the input string as keys and the occurence of each character as corresponding values.'''
def char_count(s):
    d=dict()
    for i in s:
        if i not in d:
            d[i]=1
        elif i in d:
            d[i]+=1
    return d

print(char_count("hello3"))
#expected output: {'h': 0, 'e': 0, 'l': 1, 'o': 0, '3': 0}
print(char_count("There is this programmer"))
#expected output: {'T': 1, 'h': 2, 'e': 3, 'r': 4, ' ': 3, 'i': 2, 's': 2, 't': 1, 'p': 1, 'o': 1, 'g': 1, 'a': 1, 'm': 2}
print(char_count("1234445"))
#expected output: {'1': 1, '2': 1, '3': 1, '4': 3, '5': 1}
