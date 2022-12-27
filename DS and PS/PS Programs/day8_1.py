#quadratic equations

a=int(input("Enter coefficient of x2: "))
b=int(input("Enter coefficient of x: "))
c=int(input("Enter coefficient of constant: "))

D = (b**2)-4*a*c

if D>=0:
    r1= (-1*b+(D**0.5))/(2*a)
    r2= (-1*b-(D**0.5))/(2*a)
else:
    D=D*-1
    d=str(D/(2*a))+'i'
    e=str((-1*b)/(2*a))
    r1=e+'+'+d
    r2=e+'-'+d

print("Root 1: ",r1)
print("Root 2: ",r2)
    


