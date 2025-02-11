#include <stdio.h>
#include <time.h>
int main(void) {
    printf("        UNIX ZAMAN SIHIRBAZI\n\n\n\n");
    printf("Epoch zamani nedir: \n");
    printf("  Unix zaman veya Epoch zamani, 1 Ocak 1970 tarihinden\n itibaren su ana kadar gecen zamanin saniyeler cinsinden gosterimidir.    \n");
    printf("https://tr.wikipedia.org/wiki/Unix_zaman\n\n");
    printf("------------------------------------------------\n");

    struct tarih {
        int yil;
        int ay;
        int gun;
        int saat;
        int dakika;
        int saniye;
    };

    do {
        struct tarih tarih1;
        struct tarih tarih2;

        printf("Birinci tarihin\n");

        printf("Yil:  \n");
        scanf("%d", &tarih1.yil);
        printf("Ay (sayi olarak):  \n");
        scanf("%d", &tarih1.ay);
        printf("Gun:  \n");
        scanf("%d", &tarih1.gun);
        printf("Saat:  \n");
        scanf("%d", &tarih1.saat);
        printf("Dakika:  \n");
        scanf("%d", &tarih1.dakika);
        printf("Saniye:  \n");
        scanf("%d", &tarih1.saniye);

        long epoch1 = tarih1.saniye + (tarih1.dakika * 60) + (tarih1.saat * 3600) + (tarih1.gun * 86400) + (tarih1.ay * 2629743) + ((tarih1.yil - 1970)  * 31556926 ); ;
        printf("Epoch: %ld\n", epoch1);



        printf("\n\nIkinci tarihin\n");

        printf("Yil:  \n");
        scanf("%d", &tarih2.yil);
        printf("Ay (sayi olarak):  \n");
        scanf("%d", &tarih2.ay);
        printf("Gun:  \n");
        scanf("%d", &tarih2.gun);
        printf("Saat:  \n");
        scanf("%d", &tarih2.saat);
        printf("Dakika:  \n");
        scanf("%d", &tarih2.dakika);
        printf("Saniye:  \n");
        scanf("%d", &tarih2.saniye);

        long epoch2 = tarih2.saniye + (tarih2.dakika * 60) + (tarih2.saat * 3600) + (tarih2.gun * 86400) + (tarih2.ay * 2629743) + ((tarih2.yil - 1970)  * 31556926 ); ;
        printf("Epoch2: %ld\n", epoch2);

        long fark;
        if (epoch2 > epoch1) {
            fark = epoch2 - epoch1;
            printf("Iki zaman diliminin epoch zamanlarinin farki: %ld\n", fark);
            break;
        }

        if (epoch2 < epoch1) {
            fark = epoch1 - epoch2;
            printf("Iki zaman diliminin epoch zamanlarinin farki: %ld\n", fark);
            break;
        }




    }

    while (1);










}
