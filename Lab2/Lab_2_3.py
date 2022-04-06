n1 = int(input("Enter integer: "))

def turn(n1):
    n2 = 0
    while n1 > 0:
        digit = n1 % 10
        n1 = n1 // 10
        n2 = n2 * 10
        n2 = n2 + digit 
    return n2
        
print('revers of this number:', turn(n1))
