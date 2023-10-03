"""you are given an array of lenght n which consist of elements from 1 to x.
   your task is to find the frequency of each element from 1 to n
"""


def countFrequency(n: int, m: int, edges: []):
    f=[0]*(n)
    for i in range(n):
        if edges[i]<=n:
            a=edges[i]-1
            f[a]+=1
    return f
