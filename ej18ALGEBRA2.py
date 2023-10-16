def permutacionUno(permu:list)->list:
    n=len(permu)
    l=[]
    if n=1:
        l.apend(permu[0])
    else:
        for x in range(2,len):
            l.append(permu[x])
return l

print(permutacionUno([1,2,3,4,5,6,7,8,9]))