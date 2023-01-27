#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>


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
                if (islem==1)
                {
                    int toplam = 0,i,sayi;
                    printf("\nToplama islemi yapilacak.\n");
                    printf("Toplamak istediginiz sayilari giriniz. Toplama isleminin yapilmasi icin en son -1 giriniz.\n");
                    for (i=0 ; true; i++)
                    {
                        scanf("%d",&sayi);
                        if (sayi==-1)
                        {
                            break;
                        }
                        toplam += sayi;
                    }
                    printf("Sonuc: %d",toplam);
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
                if (islem==2)
                {
                    printf("Cikarma islemi yapilacak.\n");
                    int sonuc = 0,i,sayi1,sayi;
                    printf("Bir sayi belirleyip o sayidan cikarmak istediginiz sayilari giriniz. Cikarma isleminin yapilmasi icin en son 0 giriniz.\n");
                    scanf("%d",&sayi1);

                    for (i=0 ; true; i++)
                    {
                        scanf("%d",&sayi);
                        if (sayi==0)
                        {
                            break;

                        }
                        sonuc = sayi1-=sayi;
                    }
                    printf("Sonuc: %d",sonuc);
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
                if (islem==3)
                {
                    printf("Carpma islemi yapilacak.\n");
                    int sonuc = 1,i,sayi;
                    printf("Birbiriyle carpmak istediginiz sayilari giriniz. Carpma isleminin yapilmasi icin en son 0 giriniz.\n");

                    for (i=0 ; true; i++)
                    {
                        scanf("%d",&sayi);
                        if (sayi==0)
                        {
                            break;

                        }
                        sonuc *= sayi;
                    }
                    printf("Sonuc: %d",sonuc);
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
                if (islem==4)
                {
                    printf("Bolme islemi yapilacaktir.\n");
                    printf("Bolmek istediginiz iki sayiyi giriniz: ");
                    scanf("%d %d",&x,&y);
                    sonuc4 = x/y;
                    kalan = x%y;
                    printf("\nSectiginiz sayilarin bolumunden sonuc = %d ve kalan ise = %d",sonuc4, kalan);
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
                    printf("\nKuvvet alma islemi yapilacaktir.\nIlk gireceginiz sayi kuvveti alinacak sayidir.\nIkinci girdiginiz sayi, "
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
