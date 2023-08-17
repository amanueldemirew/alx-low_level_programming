#!/usr/bin/python3
l = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        p = i * j
        if str(p) == str(p)[::-1] and p > l:
            l = p

with open("102-result", "w") as file:
    file.write(str(l))
