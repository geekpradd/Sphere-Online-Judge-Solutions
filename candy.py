from __future__ import division
data = [3,4]
def steps(array):
    avg = sum(array)/len(array)
    if avg!=int(avg):
        return -1 
    steps = 0
    for a in array:
        if a>avg:
            steps += a-avg 

    return int(steps)

print (steps(data))

