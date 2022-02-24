from math import sqrt
import numpy as np

n = input("Enter Number: ")  #inputing a number

sr = sqrt(int(n))       #calculating Square Root
cr = np.cbrt(int(n))    #calculating Cube Root

print("Square root = "+str(sr))
print("Cube root = "+str(cr))
