n=int(input('enter number'))
f=1
if n<0:
    print('f dont exist')
elif n==0:
    print('f is 1 for 0 and 1')
else:
    for i in range(1,n+1):
        f=f*i
print(f,'is the factorial')