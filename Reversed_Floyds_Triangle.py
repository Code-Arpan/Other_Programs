n = int(input("Enter number of rows: "))
k=0
for i in range(n):
    k+=i      #calculating the 1st number to print 
    m= n+k    #according to the number of rows

for i in range(n):
    for j in range(i+1):
        print(format(m,"<3"),end=" ")
        m-=1
    print()
