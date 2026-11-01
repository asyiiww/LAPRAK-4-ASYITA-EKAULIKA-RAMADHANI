while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5:
        print("Terimakasih telah menggunakan kalkulator Asyita")
        break
    elif pilihan >= 1 and pilihan <= 4:
        a = float(input("Masukkan angka pertama : "))
        b = float(input("Masukkan angka kedua : "))

        if pilihan == 1:
            hasil = a + b
            operasi = "penjumlahan"
        elif pilihan == 2:
            hasil = a - b
            operasi = "pengurangan"
        elif pilihan == 3:
            hasil = a * b
            operasi = "perkalian"
        elif pilihan == 4:
            hasil = a / b
            operasi = "pembagian"

        print(f"Hasil {operasi} antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")