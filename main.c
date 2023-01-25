#include <stdio.h>
#include <math.h>
#include <conio.h>


int main()
{
    printf("Yapmak istediginiz islemin sayi degerini yaziniz.\n1. Toplama \n2. Cikarma \n3. Carpma \n4. Bolme \n5. Kuvvet Alma \n6. Yuzde Hesaplama \n");
    int islem;
    scanf("%d",&islem);

    int x;
    int y;
    printf("Hesaplamak icin kullanmak istediginiz sayi degerlerini giriniz.\n");
    scanf("%d %d",&x,&y);

    long int sonuc1,sonuc2,sonuc3,sonuc4,kalan,sonuc5,sonuc6;
    sonuc1 = x+y;
    sonuc2 = x-y;
    sonuc3 = x*y;
    sonuc4 = x/y;
	kalan = x%y;
    sonuc5 = pow(x,y);
    sonuc6 = (x*y)/100;

    if (islem==1){
        printf("Sectiginiz sayilarin toplamý = %d",sonuc1);
    }
    else if (islem==2){
        printf("Sectiginiz sayilarin cikarma islemi sonucu = %d",sonuc2);
    }
    else if (islem==3){
        printf("Sectiginiz sayilarin carpimi = %d,",sonuc3);
    }
    else if (islem==4){
        printf("Sectiginiz sayilarin bolumunden sonuc = %d, kalan ise = %d",sonuc4, kalan);
    }
    else if (islem==5){
        printf("Sectiginiz sayilarin kuvvet alma islemi sonucu = %d",sonuc5);
    }
    else {
        printf("Sectiginiz sayilarýn yüzde islemi sonucu %d",sonuc6);
    }
    getch();
    return 0;
}
