Mağara Çıkış Bulucu (Labirent Çözücü)
Bu proje, C dilinde yazılmış, Özyinelemeli (Recursive) Backtracking algoritmasını kullanarak 2 boyutlu bir matris içerisindeki
çıkış yolunu bulan bir uygulamadır.

🚀 Çalışma MantığıProgram, belirli bir başlangıç noktasından başlayarak hedef değere ulaşana kadar dört ana yönde (Sağ, Aşağı, Sol, Yukarı)
hareket eder. Geçtiği yolları işaretler ve eğer bir yol çıkmaza girerse geri dönerek alternatif yolları dener.

Matris Değerleri ve Anlamları
Değer Açıklama: 1 = Geçilebilir yol. 0 = Duvar / Engel (Geçilemez).9 = Canavar / Tehlike (Geçilemez).7 = Çıkış Kapısı (Hedef).

🛠️ Kod Yapısı Temel Fonksiyonlar 

mons(int arr[m][n], int satır, int sütun): Ana özyinelemeli fonksiyondur. Karakterin koordinatlarını kontrol eder, sınır dışına çıkıp
çıkmadığını veya bir engele çarpıp çarpmadığını denetler.

ex[m][n] Matrisi: Gidilen yolu takip etmek için kullanılan yardımcı bir matristir. Başarıyla geçilen yollar 1 ile işaretlenir.
Algoritma Adımları Sınır Kontrolü: Belirlenen koordinatlar matrisin dışındaysa durur.
Engel Kontrolü: Mevcut hücre 0 (duvar), 9 (canavar) veya zaten ziyaret edilmiş bir hücreyse geri döner
.Hedef Kontrolü: Eğer hücre değeri 7 ise çıkış bulunmuştur; o ana kadarki yol ekrana yazdırılır.
Hareket: Eğer yol uygunsa (1), hücre işaretlenir ve sırasıyla sağ, aşağı, sol ve yukarı yönleri için fonksiyon tekrar çağrılır.
Backtracking: Eğer gidilen yoldan hedefe ulaşılamazsa, işaretleme geri kaldırılır (ex[satır][sütun] = 0).

💻 Kurulum ve Çalıştırma 
Kodu bilgisayarınızda çalıştırmak için bir C derleyicisine (GCC, Clang vb.) ihtiyacınız vardır.
Kodu bir dosyaya kaydedin (örneğin: magara.c).
Terminali açın ve dosyayı derleyin : Bashgcc magara.c -o magara
Programı çalıştırın:Bash./magara

📝 Örnek ÇıktıProgram başarıyla çıkışa ulaştığında, izlediği yolu içeren matrisi ekrana basar.
Çıktıda 1ler izlenen rotayı, 7 ise hedefi temsil eder:
Plaintext
  1  0  0  0  0
  1  1  0  0  0
  0  1  0  0  0
  1  1  1  0  0
  0  0  1  1  7
Not: Kod şu anki haliyle hedefe ulaştığında yolu yazdırır ancak return 1 yapısı sayesinde sadece ilk bulduğu geçerli yolu döndürür.
