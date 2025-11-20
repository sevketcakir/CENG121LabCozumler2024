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
    int toplam = 0;
    for (size_t i = 0; i < n; i++) { // ilk satırı kullanarak toplamı belirle
        toplam += matris[0][i];
    }
    // Satırlara bakan döngü
    for (size_t i = 1; i < n; i++) { // ilk satırı göz ardı et
        int satir_toplam = 0;
        for (size_t j = 0; j < n; j++) {
            satir_toplam += matris[i][j];
        }
        if(satir_toplam != toplam) {
            return 0; // sihirli değil
        }
    }
    // Sütunlara bakan döngü
    for (size_t j = 0; j < n; j++) {
        int sutun_toplam = 0;
        for (size_t i = 0; i < n; i++) {
            sutun_toplam += matris[i][j];
        }
        if (sutun_toplam != toplam) {
            return 0; // sihirli değil
        }        
    }
    // Köşegenlere bakan döngü
    int kosegen1 = 0, kosegen2 = 0;
    for (size_t i = 0; i < n; i++) {
        kosegen1 += matris[i][i];
        kosegen2 += matris[i][n-i-1];
    }
    if (kosegen1 != toplam || kosegen2 != toplam) {
        return 0; // sihirli değil
    }
    return 1; // sihirli    
}
