def toDigits(n, b):
    """Convert a positive number n to its digit representation in base b."""
    digits = []
    while n > 0:
        digits.insert(0, n % b)
        n  = n // b
    return digits
def fromDigits(digits, b):
    """Compute the number given by digits in base b."""
    n = 0
    for d in digits:
        n = b * n + d
    return n

print( fromDigits([int(x) for x in "1111000"], 10))