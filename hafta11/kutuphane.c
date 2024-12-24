#include<stdio.h>
#include<string.h>

/*
Bu programın yapması gerekenler:

1. Kullanıcıdan bir binary dosya adı alınacak. Bu dosyada
   aşağıda tanımlanan "Kitap" türünden en fazla 50 adet kayıt
   bulunabilir (bazı kayıtlar boş olabilir).

2. Binary dosyadaki kitap bilgileri işlenerek aşağıdaki
   bilgileri hesaplayıp ekrana yazdıracaktır:
   - Kitap sayısı (boş olmayan kayıtların sayısı).
   - Toplam kitap sayısı (stokların toplamı).
   - En fazla stok adeti.
   - Stoku bir olan kitap sayısı.
   - Alfabetik olarak en küçük kitap adı.
*/

typedef struct kitap {
    int kitap_no;         // Kitap ID
    char adi[150];        // Kitap adı
    char yazar[100];      // Yazar adı
    int stok;             // Stok adeti
} Kitap;

int main()
{
    FILE * fptr; // Dosya tutamacı
    char dosya_adi[100]; // dosya adını tutacak değişken
    int kitap_sayisi=0, toplam_kitap_sayisi=0, maks_stok=0, stok_bir=0; // istatiksel değişkenler
    char en_kucuk_kitap[150] = ""; // ismi en küçük kitabı tutacak değişken
    scanf("%s", dosya_adi); // dosya adını kullanıcıdan al
    fptr = fopen(dosya_adi, "rb"); // Dosyayı okuma modunda aç
    if(fptr == NULL) { // dosya açılamadıysa
        puts("Dosya bulunamadı!");
        return -1;
    }
    Kitap k; // Okunan kitap bilgisini tutacak değişken
    fread(&k, sizeof(Kitap), 1, fptr); // 1 tane kayıt oku
    while (!feof(fptr)) // Dosya sonuna gelene kadar
    {
        if(k.kitap_no != 0) { // Dolu kayıt
            kitap_sayisi++; // kitap sayısını artır
            toplam_kitap_sayisi += k.stok; // toplam kitap sayısını mevcut kitabın stok miktarı kadar artır
            if(k.stok > maks_stok) { // maksimum stok adetinden daha fazla ise
                maks_stok = k.stok; // yeni maksimumu belirle
            }
            if(k.stok == 1) { // stok sayısı 1 olan kitap ise
                stok_bir++; // ilgili değişkeni artır
            }
            // en_kucuk_kitap stringi boşsa veya mevcut kitap adı en kucuk kitap adından daha kucukse
            if(strlen(en_kucuk_kitap)==0 || strcmp(k.adi, en_kucuk_kitap) < 0) {
                strcpy(en_kucuk_kitap, k.adi); // yeni en kucuk kitabı belirle
            }
        }
        fread(&k, sizeof(Kitap), 1, fptr); // Sıradaki kaydı oku
    }
    // İstatikleri yazdır
    printf("Kitap sayısı: %d\n", kitap_sayisi);
    printf("Toplam kitap sayısı: %d\n", toplam_kitap_sayisi);
    printf("En fazla stok adeti: %d\n", maks_stok);
    printf("Stoku bir olan kitap sayısı: %d\n", stok_bir);
    printf("En kucuk kitap adı: %s\n", en_kucuk_kitap);

    fclose(fptr); // dosyayı kapat
    return 0;
}
