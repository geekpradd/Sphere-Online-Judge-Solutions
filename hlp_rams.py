#Python 3
def choose(n, k):
    """
    A fast way to calculate binomial coefficients by Andrew Dalke (contrib).
    """
    if 0 <= k <= n:
        ntok = 1
        ktok = 1
        for t in range(1, min(k, n - k) + 1):
            ntok *= n
            ktok *= t
            n -= 1
        return ntok // ktok
    else:
        return 0
cases = int(input(""))
for a in range(cases):
    f = int(input(""))
    s = [choose(f,x)%2 for x in range(f+1)]
    print (s.count(0), s.count(1))