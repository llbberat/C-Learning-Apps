PROJE BAŞLIĞI: Özyinelemeli (Recursive) Hazine Avı Algoritması

PROJE ÖZETİ:Bu program, C programlama dili kullanılarak yazılmış, (3x3) boyutundaki bir tam sayı matrisi içerisinde belirli
bir hedef değeri (hazineyi) arayan bir algoritmadır. Projenin temel amacı, döngü (for/while) kullanmadan, tamamen özyinelemeli (recursive) 
fonksiyonlar aracılığıyla matris tarama mantığını uygulamaktır.

TEKNİK ÖZELLİKLER:

Veri Yapısı: Program (3x3) boyutunda iki adet matris kullanır. Birincisi verilerin tutulduğu ana matris, ikincisi ise sonucun 
görselleştirildiği işaretleme matrisidir.

Algoritma Mantığı:Fonksiyon her adımda mevcut koordinatı kontrol eder.Eğer bulunulan sütun sınırına ulaşılırsa, bir alt satırın başına
geçiş yapılır.Eğer bulunulan satır sınırına ulaşılırsa, tarama sona erer.Hedef değer (7) bulunduğunda, bu konum ikinci bir matris üzerinde
işaretlenir ve tüm matris ekrana yazdırılır.

NASIL ÇALIŞTIRILIR?

Bilgisayarınızda bir C derleyicisinin (GCC gibi) kurulu olduğundan emin olun.Kod dosyasını bir metin editörüyle açıp .c uzantısıyla kaydedin.
Terminal veya komut istemcisini açarak şu komutu girin: gcc dosya_adi.c -o hazineArdından programı başlatmak için ./hazine komutunu kullanın.

KULLANIM SENARYOSU:Program çalıştığında kullanıcıdan girdi beklemez. Kod içerisinde tanımlanmış olan matrisi otomatik olarak tarar.
Hazineyi bulduğu anda koordinatları tespit eder, ekrana "Hazine Bulundu !!" yazar ve hazinenin yerini gösteren sembolik matrisi çıktı 
olarak verir

.GELİŞTİRİCİ BİLGİLERİ:
Ad Soyad: Berat Topuz
Kurum: Karabük Üniversitesi
Bölüm: Yazılım Mühendisliği
Ders: Bilgisayar Programlama
