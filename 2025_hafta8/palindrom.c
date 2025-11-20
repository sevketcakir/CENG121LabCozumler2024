/**
 * Bu uygulamada palindrom fonksiyonunu işaretçiler kullanarak yazmanız
 * beklenmektedir. Palindrom, tersten okunuşu da aynı olan kelimelerdir.
 * Örneğin "level", "radar", "madam" gibi kelimeler palindromdur.
 * Çözüm için kelimenin başından ve sonundan işaretçiler kullanarak
 * karşılaştırma yapmanız gerekmektedir. Döngünün sonlanması için,
 * işaretçilerin birbirini geçmesi veya aynı konumu göstermesi durumunu
 * kontrol etmeniz gerekmektedir.
 * main fonksiyonunda değişiklik yapmayınız, sadece palinrom fonksiyonunun
 * gövdesini yazınız.
 *
 * İpucu: Bir kelimenin uzunluğunu bulmak için strlen fonksiyonunu
 * kullanabilirsiniz.
 */
#include <stdio.h>
#include <string.h>

int palindrom(const char *kelime);

int main(int argc, char const *argv[])
{
    //main fonksiyonunda değişiklik yapmayınız...
    int adet;
    char kelime[100];
    scanf("%d", &adet);
    int palindrom_sayisi = 0;
    for (int i = 0; i < adet; i++) {
        scanf("%s", kelime);
        if (palindrom(kelime)) {
            palindrom_sayisi++;
        }
    }
    printf("%d\n", palindrom_sayisi);
    return 0;
}

int palindrom(const char *kelime) {
    const char * bas = kelime; // ilk karakterin adresi
    const char * son = kelime + strlen(kelime) - 1; // son karakterin adresi
    while(bas < son) { // baş, sondan küçük olduğu sürece
        if (*bas != *son) { // bakılan karakterler farklı ise
            return 0;//false
        }
        bas++; // sonraki karakter
        son--; // önceki karakter
    }
    return 1;//true
}
