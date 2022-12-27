#A power B

a=int(input("Enter A: "))
b=int(input("Enter B: "))
k=int(input("Enter k: "))

c=str(a**b)
print(c)
c=c[::-1]
print(c[k-1])
