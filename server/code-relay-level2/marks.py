"""Python program that stores marks of different subjects of 4 semesters as a list value of
keys in a python dictionary. And then calculates average of 4 semesters for each subject."""
marks={'C':[70,80,60,75],'Python':[90,87,78,89],'Linux':[78,90,60,70],'Java':[80,97,78,67]}
avg = {k:sum(v)/len(v) for k,v in marks.items()}
print(avg)
