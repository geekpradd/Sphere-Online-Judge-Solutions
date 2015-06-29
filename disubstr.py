def main(t):
    s=[]
    for x in range(1,len(t)):
        s += [t[a:a+x] for a in range(len(t)-x+1)]
    return len(set(s))+1
c = int(input())
for x in range(c):
    s = raw_input()
    print main(s)