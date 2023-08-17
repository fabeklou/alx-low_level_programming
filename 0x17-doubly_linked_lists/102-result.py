#!/usr/bin/python3

left: int = 999
right: int = 999

list_of_pal = []

for i in reversed(range(0, left + 1)):
    for j in reversed(range(0, right + 1)):
        pal = i * j
        pal_str = str(pal)
        pal_str_copy = ""
        for chr in pal_str:
            pal_str_copy = chr + pal_str_copy
        if (pal_str == pal_str_copy):
            list_of_pal.append((int(pal_str), i, j))

list_of_pal.sort(key=lambda item: item[0], reverse=True)
print("Largest palindrome is : {} got from -> {} * {}"
      .format(list_of_pal[0][0], list_of_pal[0][1], list_of_pal[0][2]))
