#include <stdio.h>
#include <math.h>
#include <conio.h>


int main()
{
    printf("1: Toplama \n2: Cikarma \n3: Carpma \n4: Bolme \n5: Kuvvet Alma \n6: Yuzde Hesaplama\nYapmak istediginiz islemin sayi degerini yaziniz: ");
    int islem,sayi,tekrar;
    scanf("%d",&islem);
    sayi=islem;
    for (sayi=islem; sayi>0; sayi= 6) {
        int x;
        int y;
        int sonuc1,sonuc2,sonuc3,sonuc4,sonuc5,sonuc6,kalan;

        switch (islem)
        {
            case 1:
                if (islem==1){
                    printf("\nToplama islemi yapilacak.\n");
                    printf("Hesaplamak icin kullanmak istediginiz sayi degerlerini giriniz: ");
                    scanf("%d %d",&x,&y);
                    sonuc1 = x+y;
                    printf("\nSectiginiz sayilarin toplami = %d",sonuc1);
                }
                printf("\nYeni bir islem yapmak icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1: Toplama \n2: Cikarma \n3: Carpma \n4: Bolme \n5: Kuvvet Alma \n6: Yuzde Hesaplama\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;

            case 2:
                if (islem==2){
                    printf("Cikarma islemi yapilacak.\n");
                    printf("Hesaplamak icin kullanmak istediginiz sayi degerlerini giriniz: ");
                    scanf("%d %d",&x,&y);
                    sonuc2 = x-y;
                    printf("\nSectiginiz sayilarin cikarma islemi sonucu = %d",sonuc2);
                }
                printf("\nYeni bir islem yapmak icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1: Toplama \n2: Cikarma \n3: Carpma \n4: Bolme \n5: Kuvvet Alma \n6: Yuzde Hesaplama\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;
            case 3:
                if (islem==3){
                    printf("Carpma islemi yapilacak.\n");
                    printf("Hesaplamak icin kullanmak istediginiz sayi degerlerini giriniz: ");
                    scanf("%d %d",&x,&y);
                    sonuc3 = x*y;
                    printf("\nSectiginiz sayilarin carpimi = %d,",sonuc3);
                }
                printf("\nYeni bir islem yapmak icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1: Toplama \n2: Cikarma \n3: Carpma \n4: Bolme \n5: Kuvvet Alma \n6: Yuzde Hesaplama\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;
            case 4:
                if (islem==4){
                    printf("Bolme islemi yapilacak.\n");
                    printf("Hesaplamak icin kullanmak istediginiz sayi degerlerini giriniz: ");
                    scanf("%d %d",&x,&y);
                    sonuc4 = x/y;
                    kalan = x%y;
                    printf("\nSectiginiz sayilarin bolumunden sonuc = %d, kalan ise = %d",sonuc4, kalan);
                }
                printf("\nYeni bir islem yapmak icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1: Toplama \n2: Cikarma \n3: Carpma \n4: Bolme \n5: Kuvvet Alma \n6: Yuzde Hesaplama\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;
            case 5:
                if (islem==5){
                    printf("Kuvvet alma islemi yapilacak. Ilk gireceginiz sayi kuvveti alinacak sayi ve ikinci girdiginiz sayi, "
                           "ilk girdiginiz sayinin kuvveti seklinde hesaplanir.\n");
                    printf("Hesaplamak icin kullanmak istediginiz sayi degerlerini giriniz: ");
                    scanf("%d %d",&x,&y);
					sonuc5 = pow(x,y);
                    printf("\nSectiginiz sayilarin kuvvet alma islemi sonucu = %d",sonuc5);
                }
                printf("\nYeni bir islem yapmak icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1: Toplama \n2: Cikarma \n3: Carpma \n4: Bolme \n5: Kuvvet Alma \n6: Yuzde Hesaplama\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;
            case 6:
                if (islem==6){
                    printf("Yuzde alma islemi yapilacak.\n");
                    printf("Hesaplamak icin kullanmak istediginiz sayi degerlerini giriniz: ");
                    scanf("%d %d",&x,&y);
                    sonuc6 = (x*y)/100;
                    printf("\nSectiginiz sayilarýn yuzde islemi sonucu %d",sonuc6);
                }
                printf("\nYeni bir islem yapmak icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1: Toplama \n2: Cikarma \n3: Carpma \n4: Bolme \n5: Kuvvet Alma \n6: Yuzde Hesaplama\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;
        }

    }
    getch();
    return 0;
}
