# C-Learning-Apps

🔐 C Learning Apps: Basic Encryption
Bu depo, C programlama dilini öğrenme sürecimde geliştirdiğim temel uygulamaları içermektedir. Şu anki ana proje, Vigenère Şifreleme mantığını kullanan bir terminal uygulamasıdır.

📁 Mevcut Proje: Şifreleme Programı
Bu program, kullanıcıdan alınan bir metni belirli bir anahtar kelime (key) kullanarak şifreler ve tekrar eski haline (mealine) getirir.

⚙️ Nasıl Çalışır?
Program, metindeki her bir karakterin ASCII değerini, anahtar kelimenin ilgili karakterinin değeriyle toplayarak (şifreleme) veya çıkararak (deşifreleme) işlem yapar.

Kullanılan Mantık:

Şifreleme: metin[i] + anahtar[i % uzunluk]

Deşifreleme: metin[i] - anahtar[i % uzunluk]

🛠️ Teknik Özellikler
fgets ve strcspn ile güvenli metin girişi.

while(1) döngüsü ile kesintisiz menü yönetimi.

getchar() ile giriş tamponu (input buffer) temizliği.
