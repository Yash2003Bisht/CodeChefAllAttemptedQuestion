# QUESTION URL: https://www.codechef.com/problems/EQUALSTRING
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    lst = []
    count = 0

    for i in range(n):
        if b[i] != a[i] and b[i] not in lst:
            count += 1
            lst.append(b[i])
    
    print(count)

