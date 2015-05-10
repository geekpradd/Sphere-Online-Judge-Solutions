from timeit import timeit
class cache(object):
    def __init__(self, fn):
        self.fn = fn
        self.cache = {}
    def __call__(self, *args):
        if tuple(args) in self.cache:
            return self.cache[tuple(args)]
        else:
            self.cache[tuple(args)] = self.fn(*args)
            return self.cache[tuple(args)]
def factorial(n):
    return reduce(lambda a,b:a*b,(x for x in range(1,n+1)))
f_factorial = cache(factorial)

if __name__ == '__main__':
    print timeit("factorial(23)",setup="from __main__ import factorial")
    print timeit("f_factorial(23)",setup="from __main__ import f_factorial")