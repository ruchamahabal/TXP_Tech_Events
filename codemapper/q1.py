def prime_list(l):
    result=[]
    flag = 0 
    for i in l:
        for j in range(2,i):
            if i%j!=0:
                flag = 1
            else:
                flag = 0
                break
        if flag == 1 or i==2 and i not in result:
            result.append(i)
    return result

print(prime_list([2,3,6,7]))
