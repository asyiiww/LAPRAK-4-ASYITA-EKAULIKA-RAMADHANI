a, b = map(int, input().split())

if a < b:
    j = b
    for i in range(a, b + 1):
        print(f"{i} {j}", end="")
        if i < b:
            print(" - ", end="")
        j -= 1
else:
    j = b
    for i in range(a, b - 1, -1):
        print(f"{i} {j}", end="")
        if i > b:
            print(" - ", end="")
        j += 1
print()