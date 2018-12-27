s = input("Enter a string:")
result=""
for i in s:
    if i.isupper():
        result = result + i.lower()
    elif i.islower():
        result = result + i.upper()
print(result)

#method 2
s = input("Enter a string:")
print(s.swapcase())
