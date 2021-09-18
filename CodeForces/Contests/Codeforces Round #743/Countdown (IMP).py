# My first competitive programming problem solved in Python. Was able to figure out the algorithm pretty quickly, which I'm proud of, but the implementation
# took hours. Wasn't able to solve in C++ due to some issues with string to integer conversions which I couldn't wrap my head around.
# Python is a bitch, the inability to change the elements of a string drives me crazy. Took me almost one hour to figure out the swap function, because I didn't
# understand how string-integer conversion happened in Python as well. Apparently the leading zeros are not considered when converting between a string and an
# integer, which makes sense, but was definitely not obvious while trying to figure out the code.


# def leftmost(s):
#     for i in range(len(s)):
#         if s[i] == '0':
#             continue
#         return i
 
 
def swap(s, n):
    return s[n-1] + s[1:n-1] + s[0]
 
 
t = int(input())
operations = 0
 
for i in range(t):
    n = int(input())
    s = input()
 
    for j in range(n):
 
        num = int(s)
        # index = leftmost(s)
 
        operations += num % 10
        num = num - (num % 10)
 
        if num == 0:
            break
 
        s = str(num)
 
        operations += 1
        s = swap(s, len(s))
 
    print(operations)
    operations = 0
