def is_even(a):
    i = a
    if i == 1:
        return False
    elif i == 2:
        return True
    while i > 0:
        evenTest = 2 * i
        if evenTest == a:
            return True
        i-=1
    return False

print(is_even(int(input("Enter a Positive Integer:"))))
