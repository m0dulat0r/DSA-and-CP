from collections import Counter
for _ in range(int(input())):
    a = Counter(input())
    b = Counter(input())
 
    # print(a - b)
    # print(b - a)
    # print('-----------',sum((a-b).values()) + sum((b-a).values()))
    print(sum((a-b).values()) + sum((b-a).values()))