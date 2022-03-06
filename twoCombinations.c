#include <stdio.h>

int fak(int);
float comb(float x,float y);

int main()
{
    int x,y;
    printf("iki sayi giriniz");
    scanf("%d %d",&x,&y);
    printf("kobinasyon : %.0f",comb(x,y));
}

float comb(float x,float y)
{
    return fak(x)/(fak(x-y)*(fak(y)));


}

int fak(int x)
{
    int sonuc=1;
    for(int i=1;i<=x;i++)
    {
        sonuc=i*sonuc;
    }return sonuc;

}
//5-10-30-120-600
