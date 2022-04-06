print('Enter count of numbers:')
n = int (input())
A = []
def turn(n1):
    n2 = 0
    while n1 > 0:
        digit = n1 % 10
        n1 = n1 // 10
        n2 = n2 * 10
        n2 = n2 + digit 
    return n2
    
A += [int(input('Enter A[%d] = '%(i+1))) for i in range(0,n)]
for i in range (0,n):
    A[i]=turn(A[i])
    
for i in range(0,n):
    print(A[i])
