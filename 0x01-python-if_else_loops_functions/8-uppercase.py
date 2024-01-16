#!/usr/bin/python3
def uppercase(str):
    for iterator in str:
        tmp = iterator
        if ord(tmp) >= 97 and ord(tmp) <= 122:
            tmp = chr(ord(iterator) - 32)
        print("{}".format(tmp), end='')
    print()
