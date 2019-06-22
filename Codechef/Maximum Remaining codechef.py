import heapq
import random
x = range(100000)
max1=random.shuffle(x)
max2=heapq.nlargest(2, x)
print(max2%max1)
