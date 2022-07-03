#include <stdio.h>
int main()
{
    while(1){
        setvbuf(stdout, NULL, _IONBF, 0);
        setvbuf(stderr, NULL, _IONBF, 0);
    double k,m;
    long sonuc;
    char islem, devam;
    printf("Islem Seciniz \n");
    printf("Toplama icin : 1\nCıkarma icin : 2\nCarpma için :  3\nBolme icin :   4\n");
        scanf("%c",&islem);
        if(islem=='1'){
            printf("----------------------\n-------TOPLAMA--------\n----------------------\n-------a + b = ?------\n----------------------\n");
            printf("a sayisini giriniz: ");
            scanf("%lf",&k);
            printf("b sayisini giriniz: ");
            scanf("%lf",&m);
            sonuc = k + m;
            printf("Islem sonucunuz: %.0lf + %.0lf = %.0lf\n", k, m, k + m, sonuc);
        }
        else if(islem=='2'){
            printf("----------------------\n-------CIKARMA--------\n----------------------\n-------a - b = ?------\n----------------------\n");
            printf("a sayisini giriniz: ");
            scanf("%lf",&k);
            printf("b sayisini giriniz: ");
            scanf("%lf",&m);
            sonuc = k - m;
            printf("sonuc = %.0lf - %.0lf = %.0lf\n", k, m, k - m, sonuc);
        }
        else if(islem=='3'){
            printf("----------------------\n--------CARPMA--------\n----------------------\n-------a * b = ?------\n----------------------\n");
            printf("a sayisini giriniz: ");
            scanf("%lf",&k);
            printf("b sayisini giriniz: ");
            scanf("%lf",&m);
            sonuc = k * m;
            printf("sonuc = %.0lf * %.0lf = %.0lf\n", k, m, k * m, sonuc);
        }
        else if(islem=='4'){
            printf("----------------------\n--------BOLME---------\n----------------------\n-------a / b = ?------\n----------------------\n");
            printf("a sayisini giriniz: ");
            scanf("%lf",&k);
            printf("b sayisini giriniz: ");
            scanf("%lf",&m);
            if (m != 0) {
                sonuc = k / m;
                printf("sonuc = %.0lf / %.0lf = %.3lf\n", k, m, k / m, sonuc);
            } else {
                printf("Bolen 0 olamaz.\n");
            }
        } else {
            printf("Geçersiz bir islem girdiniz.\n");
            printf("Lutfen tekrar secim yapiniz.\n");
        }
        printf("Baska bir islem yapmak istiyor musunuz? (y/n)\n");
        scanf("%c",&devam);
        if(devam== 'y' || devam== 'Y'){
        }
        else if(devam== 'n' || devam== 'N'){
            break;
        }
        }



        return 0;
    }
