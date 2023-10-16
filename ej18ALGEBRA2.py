def permutacionUno(permu:list)->list:
    n=len(permu)
    l=[]
    if n==1:
        l.apend(permu[0])
    else:
        for x in range(2,n):
            l.append(permu[x-1])
    return l
