# QUESTION URL: https://www.codechef.com/problems/VALIDMIN
# STATUS: wrong answer

for _ in range(int(input())):
    a, b, c = map(int, input().split(" "))
    if min(a, b) <= min(b, c) <= min(c,a):
        print("YES")
    else:
        print("NO")

