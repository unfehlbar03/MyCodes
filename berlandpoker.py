import math
n= int(input())
for i in range(n):
    line=input()
    value= line.split()
    value[0]= int(value[0])
    value[1]= int(value[1])
    value[2]= int(value[2])
    x = value[0]/value[2]
    if(x>=value[1]):
        print(value[1])
    if(x<value[1]):
        y=math.ceil(((value[1]-x)/(value[2]-1)))   
        print(int(x-y))
            