/**
 * Kullanıcıdan alınacak N tane iki boyutlu noktadan birbirine
 * en yakin olan iki nokta arasındaki uzaklığı ekrana yazan
 * programı yazınız. Uzaklığı yazdırırken virgülden sonra
 * 2 basamak gosterilsin.
 * Kullanıcı öncelikle nokta sayısını verecektir. Sonrasında
 * her noktanın x ve y koordinatlarını verecektir.
 */
#include<stdio.h>
#include<math.h>

typedef struct nokta {
    int x;
    int y;
} Nokta;

double uzaklik(Nokta a, Nokta b) {
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main() {
/*    Nokta a={0,0}, b={3,4};
    printf("%.2f", uzaklik(a,b));
*/
    int noktaSayisi;
    scanf("%d", &noktaSayisi); // nokta sayısını al
    Nokta noktalar[noktaSayisi]; // noktalar dizisini oluştur
    for(int i=0; i<noktaSayisi; i++) { // noktaları kullanıcıdan al
        scanf("%d%d", &noktalar[i].x, &noktalar[i].y);
    }
    // ilk iki nokta arasındaki uzaklığı en yakın olarak varsayalım
    double enYakin = uzaklik(noktalar[0], noktalar[1]);
    for(int i=0;i<noktaSayisi-1;i++) {
        for(int j=i+1; j<noktaSayisi; j++) {
            double yeniUzaklik = uzaklik(noktalar[i], noktalar[j]);
            if(yeniUzaklik < enYakin) { // daha yakın iki nokta varsa
                enYakin = yeniUzaklik; // uzaklığı güncelle
            }
        }
    }
    printf("%.2f\n", enYakin); // ekrana en yakın uzaklığı yazdır
    return 0;
}
