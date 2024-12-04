/**
 * Bu program, NxN boyutunda bir matrisin sihirli kare olup olmadığını
 * kontrol eder.
 *
 * Sihirli kare, bir matrisin her satır, sütun ve ana çaprazlarının
 * toplamının aynı olduğu özel bir düzenlemedir.
 *
 * Öğrencinin görevi:
 * - `sihirliKare` fonksiyonunu tamamlayarak verilen matrisin sihirli
 * kare olup olmadığını kontrol etmek.
 *
 * Önemli noktalar:
 * - İlk olarak bir sihirli toplam hesaplanmalıdır (örneğin, ilk satır
 *   toplamı).
 * - Daha sonra tüm satır, sütun ve çaprazların toplamlarının bu
 *   değere eşit olup olmadığını kontrol edin.
 * - `sihirliKare` fonksiyonu, sihirli kare ise `1`, değilse `0`
 *   döndürmelidir.
 *
 * Çıktı Örneği:
 * - Kullanıcıdan alınan 3x3 bir sihirli kare için:
 *   Girdi:
 *   3
 *   8 1 6
 *   3 5 7
 *   4 9 2
 *   Çıktı: sihirli kare
 *
 * - Eğer sihirli kare değilse:
 *   Çıktı: sihirli kare değil
 */

#include<stdio.h>

int sihirliKare(int n, int matris[n][n]);

int main() {
    int n; // Matris boyutunu tutacak degisken
    scanf("%d", &n); // Matris boyutunu kullanıcıdan al
    int matris[n][n]; // Matrisi tutacak dizi
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]); // Matrisi kullanıcıdan al
        }
    }
    if(sihirliKare(n, matris)) { // Matris sihirli kare mi
        printf("sihirli kare\n");
    } else { // değilse
        printf("sihirli kare değil\n");
    }
    return 0;
}

int sihirliKare(int n, int matris[n][n]) {
    int toplam=0, toplam2=0, toplam3=0;
    for(int j=0;j<n;j++) { // toplam degerini hesapla
        toplam += matris[0][j];
    }
    // Satırlara bak
    for(int i=0;i<n;i++) {
        toplam2=0; // her satırda toplamı sıfırla
        for(int j=0;j<n;j++) {
            toplam2 += matris[i][j];
        }
        if(toplam != toplam2) { // satır toplamı toplam ile esit degilse
            return 0; // false
        }
    }
    //Sütunlara bak
    for(int j=0;j<n;j++) {
        toplam2 = 0; // her sutunda toplamı sıfırla
        for(int i=0;i<n;i++) {
            toplam2 += matris[i][j];
        }
        if(toplam != toplam2) { // sutun toplamı toplam ile esit degilse
            return 0; // false
        }
    }
    // Köşegenlere bak
    toplam2=0; toplam3=0; // kosegenlerdeki toplamları sıfırla
    for(int i=0; i<n; i++) {
        toplam2 += matris[i][i]; // 1. köşegen
        toplam3 += matris[i][n-i-1]; // 2. köşegen
    }
    // Köşegenlerden herhangi birisi toplama eşit degilse
    if(toplam != toplam2 || toplam != toplam3) {
        return 0; // false
    }
    // sihirli kare özelliğini bozan bir durum yok
    return 1; // true
}
