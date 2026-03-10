# 🚀 CENG 121 - Algoritmalar ve Programlama Laboratuvarı Çözümleri 💻

Bu depo, Algoritmalar ve Programlama dersi laboratuvar uygulamaları (Bilmoodle VPL ortamı) için yazılmış örnek C programlama çözümlerini içermektedir. 🎓 Çözümler haftalık konulara göre klasörlenmiştir.

## 🛠️ Derleme ve Çalıştırma (Moodle Dışı Kullanım İçin)
Kodlar Bilmoodle VPL (Virtual Programming Lab) ortamında çalışacak şekilde, genellikle gereksiz `printf` istemleri (prompt) kullanılmadan yazılmıştır. Kendi bilgisayarınızda denemek isterseniz standart bir C derleyicisi (GCC vb.) kullanabilirsiniz:

```bash
gcc ornek_cozum.c -o ornek_cozum
./ornek_cozum

```

*Not: `math.h` kütüphanesi içeren kodları (örn. `hipotenus.c`, `enyakinuzaklik.c`) derlerken komutun sonuna `-lm` bayrağını eklemelisiniz (`gcc kod.c -o kod -lm`).*

---

## 📂 İçerik ve Haftalık Uygulamalar

### 🔢 Hafta 3: Temel Girdi/Çıktı ve Değişkenler

* 🧮 **`basamak_yazdir.c`:** Kullanıcıdan alınan sayının basamak değerlerini (birler, onlar, yüzler vb.) mod ve bölme işlemleriyle ayırıp alt alta yazdırır.
* ➕ **`iki_sayi_toplami.c`:** Kullanıcıdan alınan iki tamsayıyı toplayıp ekrana yazdırır.
* 🌍 **`merhaba_dunya.c`:** Ekrana klasik "Merhaba dünya!" metnini yazdırır.
* ⚖️ **`tek_cift.c`:** Girilen tamsayının modülüs operatörü kullanılarak tek mi çift mi olduğunu belirler.

### 🔄 Hafta 4: Döngüler ve Koşul Yapıları

* 💰 **`faiz.c`:** Anapara, faiz oranı ve gün sayısına göre basit faiz hesaplaması yapar.
* ➖ **`negatif_sayi.c`:** Girilen 15 sayıdan kaç tanesinin negatif olduğunu sayar.
* 🏆 **`on_sayidan_buyugu.c`:** [-100, 100] aralığında girilen 10 sayı içerisinden en büyük olanı (maksimum değeri) bulur.
* ➗ **`tam_bolen_sayisi.c`:** Pozitif bir tamsayının kendisinden küçük kaç tane tam böleni olduğunu hesaplar.

### 🔁 Hafta 5: İç İçe Döngüler

* 📊 **`bar_grafik.c`:** Girilen 5 farklı değere göre ekrana 'a' karakterleriyle yatay çubuk (bar) grafik çizer.
* 🔺 **`piramit_cizdirme.c`:** Girilen `n` değerine göre ekrana boşluklar ve 'a' karakterlerinden oluşan bir piramit çizer.
* 📐 **`ucgen_cizdirme.c`:** Girilen `n` değerine göre ekrana sola dayalı, giderek artan sayıda 'a' karakteriyle dik üçgen çizer.
* 🚀 **`us_alma.c`:** `x` ve `y` değerlerini alarak, çarpım döngüsü ile üs alma işlemini hesaplar.

### 🛠️ Hafta 6: Fonksiyonlar

* 🔀 **`basamak_yazdir.c`:** Basamaklarına ayırma işlemini `basamak_yazdir` isimli ayrı bir fonksiyon kullanarak yapar ve ters sırada yazdırır.
* 📐 **`hipotenus.c`:** İki dik kenarı verilen üçgenin hipotenüsünü `math.h` kütüphanesindeki `sqrt` fonksiyonuyla hesaplayan özel bir fonksiyon içerir.
* 📏 **`mutlak.c`:** Parametre olarak aldığı ondalıklı sayının mutlak değerini döndüren `mutlak` fonksiyonunu tanımlar.
* ➗ **`tam_bolen_sayisi.c`:** Tam bölen sayma işlemini `tam_bolen_sayisi` isimli fonksiyona taşıyarak modüler bir yapı sunar.

### 🪆 Hafta 7: Özyinelemeli (Recursive) Fonksiyonlar

* ↕️ **`azalt_artir_yazdir.c`:** Parametre olarak alınan değeri rekürsif fonksiyonlarla 1'e kadar azaltarak ve 1'den o değere kadar artırarak yazar.
* 🔟 **`ikili_taban.c`:** Girilen onluk tabandaki sayıyı, 2'ye bölme işlemiyle özyinelemeli olarak ikilik tabana çevirir.
* 🔄 **`ikili_taban_tersten.c`:** Sayıyı iteratif (döngüsel) yöntemle ikili tabana çevirir ve tersten ekrana basar.
* 🚀 **`us.c`:** Üs alma işlemini özyinelemeli fonksiyonla çözer.

### 📚 Hafta 8: Diziler (Arrays)

* 🎡 **`daireselrotasyon.c`:** Verilen bir dizinin elemanlarını bir pozisyon sağa kaydırarak dairesel rotasyon yapar.
* 🔍 **`essiz.c`:** Değişken uzunluklu dizi (VLA) kullanarak, girilen elemanlar içerisinde tekrar eden (duplicate) değer olup olmadığını kontrol eder.
* 🪞 **`palindrom.c`:** `strlen` kullanarak bir dizinin (kelimenin) ortasına kadar ilerler ve kelimenin palindrom (tersten okunuşu aynı) olup olmadığını tespit eder.
* 🪄 **`sihirlikare.c`:** NxN boyutundaki matrisin satır, sütun ve köşegen toplamlarının eşit olup olmadığını sınayarak sihirli kare olup olmadığını bulur.

### 📌 Hafta 9: İşaretçiler (Pointers)

* ⚖️ **`karsilastir.c`:** İşaretçiler yardımıyla iki kelimeyi karşılaştırarak aynı olup olmadıklarını kontrol eder.
* 🗣️ **`sesliharf.c`:** Bir kelimenin bellek adresleri üzerinde işaretçi ile gezinerek içindeki sesli harflerin sayısını bulur.
* 🔄 **`tersinial.c`:** Kelimenin başlangıç ve bitiş adreslerini tutan iki işaretçi kullanarak kelimenin tersini alır.
* 📏 **`uzunluk.c`:** `strlen` fonksiyonu kullanmadan, işaretçiyi ilerleterek dizinin uzunluğunu manuel hesaplar.

### 🏗️ Hafta 10: Yapılar (Structs)

* 🏦 **`bankahesap.c`:** `Hesap` isimli bir yapı (struct) ile müşteri adı ve bakiyeleri tutar, hesap hareketlerine göre bakiyeyi günceller.
* 🗺️ **`enyakinuzaklik.c`:** Koordinatları `Nokta` yapısıyla tutulan N adet nokta arasındaki en kısa mesafeyi hesaplar.
* 💼 **`enyuksekmaasli.c`:** Çalışanları `Calisan` yapısı ile modeller ve en yüksek maaşı alan personelin adını bulur.

### 📁 Hafta 11: Dosya İşlemleri (File I/O)

* 📝 **`kelime_sayisi.c`:** Metin dosyasını okur ve ardışık alfabetik karakter bloklarını (kelimeleri) sayar.
* 📚 **`kutuphane.c`:** Binary (ikili) dosyadan `Kitap` yapısı bloklarını okur ve toplam stok, en fazla stok gibi istatistikleri çıkarır.
* 🔎 **`n_uzunluklu_kelime_sayisi.c`:** Dosya içerisinde sadece harflerden oluşan ve uzunluğu kullanıcı tarafından belirtilen `n` değerine eşit olan kelimeleri sayar.

---

### ✨ 2025 Eklemeleri ve Güncellemeler

#### 🗓️ 2025 Hafta 7

* 🎡 **`daireselrotasyon.c`:** Kullanıcıdan alınan diziyi dairesel rotasyon ile döndüren uygulamanın güncel sürümü.
* 💎 **`essiz_deger.c` & `essiz_deger2.c`:** Sabit boyutlu (20 eleman) ve değişken uzunluklu (VLA) dizilerde benzersizlik kontrolü uygulamaları.
* 📈 **`farkli_deger.c`:** [10, 39] aralığındaki sayılar için frekans (histogram) dizisi oluşturarak kaç farklı değer girildiğini hesaplar.
* 🪞 **`palindrom.c` & `sihirlikare.c`:** Palindrom kontrolü ve sihirli kare algoritmasının fonksiyon bazlı varyasyonları.

#### 🎯 2025 Hafta 8 (İşaretçiler ile İleri Uygulamalar)

* 🪟 **`kayan_pencere.c`:** Bir dizideki ardışık üç elemanın ortalamasını alan "kayan pencere" (moving average) algoritmasını işaretçi aritmetiği ile hesaplar.
* 📝 **`kelime_sayisi.c`:** Uzun bir karakter dizisindeki kelimeleri, beyaz boşluk karakterlerini kontrol ederek işaretçiler yardımıyla sayar.
* 🪞 **`palindrom.c`:** Palindrom denetimini başlangıç ve bitiş bellek adreslerini tutan işaretçileri birbirine yaklaştırarak gerçekleştirir.
* ➕ **`pozitif_toplam.c`:** Bir dizi içerisinde ilk negatif sayı ile karşılaşılana kadar görülen tüm pozitif sayıları işaretçilerle toplayan uygulama.
