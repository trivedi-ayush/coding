l=[1,2,3,4,5,6,7,8]
n=eval(input('enter no'))
m=[l[i:i+n] for i in range(0,len(l),n)]
print(m)