x=input("Enter number seprated by spaces.")
lst= x.split()
y=[]
for val in lst:
    num=int(val)
    if(num>0):
        y.append(num)
print(y)