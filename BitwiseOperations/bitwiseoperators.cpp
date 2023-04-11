#include <stdio.h>
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;
 
    // The result is 00000001. Sayının sonundaki kısımlara işlem uygular.
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
 
    // The result is 00001101 Üst üstte binerek toplama
    printf("a|b = %d\n", a | b);
 
    // The result is 00001100 Üst üstte binenleri çıkarma
    printf("a^b = %d\n", a ^ b);
 
    // The result is 11111010  tüm bitler terse döner
    printf("~a = %d\n", a = ~a);
 
    // The result is 00010010 Sola kaydırır bitleri
    printf("b<<1 = %d\n", b << 1);
 
    // The result is 00000100 Sağa kaydırır bitleri
    printf("b>>1 = %d\n", b >> 1);
 
    return 0;
   
}