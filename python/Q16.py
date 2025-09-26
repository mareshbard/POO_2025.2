n = int(input())
i = 0;
j = 1;
aux = 0;
print(i)
print(j)


for k in range(1,n):
    print(i+j)
    aux = i
    i = j
    j = aux+j
