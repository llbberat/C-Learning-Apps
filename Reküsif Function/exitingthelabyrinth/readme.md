🧩 Recursive Labirent Çözücü (C Programming)

Bu proje, (6x12) boyutundaki bir matris üzerinde başlangıç noktasından bitiş noktasına giden yolu Özyinelemeli (Recursive)
Geri İzleme (Backtracking) algoritması kullanarak bulan bir C programıdır.📋

Proje Özellikleri

Dinamik Hareket: Algoritma; Sağ, Aşağı, Sol ve Yukarı olmak üzere 4 yöne hareket edebilir.
Hata Yönetimi: Matris sınırları dışına çıkmayı engelleyen ve negatif indis kontrolü yapan güvenlik katmanına sahiptir.
Ziyaret Takibi: yol matrisi sayesinde daha önce geçilen hücreler işaretlenerek sonsuz döngü (infinite loop) oluşması engellenir.
Geri İzleme (Backtracking): Eğer bir yol çıkmaz sokağa girerse, algoritma otomatik olarak geri döner ve alternatif yolları dener.

🛠️ Teknik Detaylar Algoritma Mantığı 

Program, labçöz(x, y) fonksiyonu üzerinden şu adımları izler:
Sınır Kontrolü: Mevcut koordinatların matris sınırları içinde olup olmadığını denetler.
Engel Kontrolü: Hücrenin duvar (0) olup olmadığını veya daha önce ziyaret edilip edilmediğini kontrol eder.
Hedef Kontrolü: Eğer koordinatlar matrisin son hücresi (satır-1, sütun-1) ise başarıyla sonlanır.
Rekürsif Dallanma: Hedefe ulaşana kadar 4 yöne kendini çağırır.Geri Adım: Bir yoldan sonuç alınamazsa,
o hücredeki işaret kaldırılır (yol[x][y] = 0) ve bir önceki karara geri dönülür.

Kullanılan TeknolojilerDil: CDerleyici: GCC veya herhangi bir standart C derleyicisi.🚀 

Nasıl Çalıştırılır?Kod dosyasını (main.c) bilgisayarınıza indirin.
Terminal veya komut satırını açın.Aşağıdaki komutları sırasıyla çalıştırın:Bashgcc main.c -o labirent./labirent

📊 Örnek ÇıktıYol bulunduğunda, izlenen rota 1 rakamlarıyla matris formatında ekrana basılır:Plaintext--Labirentten Cikis--

1 0 0 0 0 0 0 0 0 0 0 0 
1 0 1 1 1 1 1 0 0 0 0 0 
1 1 1 1 1 1 0 0 0 0 0 0 
0 0 0 0 0 1 0 1 1 1 1 1 
0 0 0 0 0 1 1 1 0 0 0 1 
0 0 0 0 0 0 0 0 0 0 0 1 

🎓 Akademik Bilgi 
Üniversite: Karabük Üniversitesi
Bölüm: Yazılım Mühendisliği
Ders: Bilgisayar Programlama - C Dili Uygulamaları
