def is_palindrome(num):
    return str(num) == str(num)[::-1]

def find_largest_palindrome():
    largest_palindrome = 0
    for i in range(999, 99, -1):
        for j in range(i, 99, -1):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
    return largest_palindrome

if __name__ == "__main__":
    result = find_largest_palindrome()
    with open("102-result", "w") as f:
        f.write(str(result))
