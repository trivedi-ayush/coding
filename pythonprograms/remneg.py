def rem(l):
    for i in l:
        if i<0:
            l.remove(i)


l=[1,-1,4,3,6]
rem(l)
print(l)