n=input()
l=len(n)
n=int(n)
m=n
arm=0
while n>0:
    x=n%10
    arm+=pow(x,l)
    n=n//10
if m==arm:
    print("true")
else:
    print("false")
