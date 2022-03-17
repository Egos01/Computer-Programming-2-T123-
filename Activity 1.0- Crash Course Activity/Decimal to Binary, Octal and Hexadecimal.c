#include <stdio.h>
#include <stdlib.h>
void DecToBin(int num)
{
    int i = 0;
    int Bin[100];
    while (num)
    {
        Bin[i] = num%2;
        num/=2;
        i++;
    }
    printf("BINARY: ");
    while (i--)
    {
        printf("%d",Bin[i]);
    }
}
void DecToOct(int num)
{
    int i = 0;
    int Oct[100];
    while (num)
    {
        Oct[i] = num%8;
        num/=8;
        i++;
    }
    printf("\nOCTAL: ");
    while (i--)
    {
        printf("%d",Oct[i]);
    }

}
void DecToHex(int num)
{
    char Hextable[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int i = 0;
    int Hex[100];
    while (num)
    {
        Hex[i] = Hextable[num%16];
        num/=16;
        i++;
    }
    printf("\nHEXADECIMAL: ");
    while (i--)
    {
        printf("%c",Hex[i]);
    }
}
int main(){
    int Dec;
    printf("ENTER YOUR DECIMAL INTEGERS: ");
    scanf("%d",&Dec);
    DecToBin(Dec);
    DecToOct(Dec);
    DecToHex(Dec);
    return 0;
}
