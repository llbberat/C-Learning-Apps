🔐 Simple C Encryption Program
Bu proje, C dilinde geliştirilmiş, temel Vigenère Şifreleme mantığına dayanan bir terminal uygulamasıdır. Kullanıcıdan alınan metni önceden belirlenmiş bir anahtar kelime (key) yardımıyla şifreler ve deşifre eder.

🚀 Özellikler
Şifreleme (Encryption): Metni ASCII değerleri üzerinden kaydırarak okunamaz hale getirir.

Deşifreleme (Decryption): Şifreli metni orijinal haline geri döndürür.

Giriş Kontrolü: scanf ve fgets arasındaki tampon (buffer) çakışmaları getchar() ile optimize edilmiştir.

Döngüsel Anahtar: Anahtar kelime metinden kısa olsa bile anahtarın başa dönmesini sağlayan modüler (%) yapı kullanılmıştır.

🛠️ Çalışma MantığıŞifreleme işlemi, metindeki her karakterin sayısal değerine, anahtar kelimenin (firefly) karakter değerlerinin eklenmesiyle gerçekleşir:
Encrypted[i] = Word[i] + Key[i \pmod{KeyLength}]
💻 Kurulum ve ÇalıştırmaKodun çalışması için sisteminizde bir C derleyicisi (GCC gibi) yüklü olmalıdır.
Dosyayı kaydedin (örneğin: main.c).Terminali açıp şu komutu yazarak derleyin:Bashgcc main.c -o encryption_tool
Uygulamayı çalıştırın:Bash./encryption_tool
📝 Kullanım NotlarıVarsayılan anahtar kelime: 
fireflyProgramdan çıkmak için menüden 3 seçeneğini kullanabilirsiniz.Şifreli metni geri çözerken, 
şifreleme sırasında kullanılan anahtarın aynı olması gerekir.
