n, kelipatan = map(int, input().split())
total_keseluruhan = 0

for i in range(1, n + 1):
    baris_str = []
    jumlah_baris = 0
    for j in range(i, 0, -1):
        baris_str.append(f"({j} * {kelipatan})")
        jumlah_baris += j * kelipatan

    print(" + ".join(baris_str) + f" = {jumlah_baris}")
    total_keseluruhan += jumlah_baris

print(total_keseluruhan)