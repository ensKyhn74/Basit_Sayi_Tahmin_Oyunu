#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Sayı Tahmin Oyunu

int main()

{
   
  int sayi;
   
  int deneme = 0;
   
  srand(time(NULL));
   
  int random_sayi = rand() % 100 ;  // 0 ile 100 arasında rastgele sayı üretilir ve kullanıcı bu sayıyı bilmeye çalışır.
  	
// printf("Atanan Sayi: %d\n",random_sayi);
   
   do
   {
   	
   printf("Bir sayi girin: ");
   scanf("%d",&sayi);
   
   if(sayi > random_sayi)
   {
   printf("Daha kucuk bir sayi girin:\n");
   }
   	
   else if(sayi < random_sayi)
   {
   printf("Daha buyuk bir sayi girin:\n");
   }	
   	
    deneme++ ;
   	
   } while(sayi != random_sayi);
   
   printf("\nTebrikler %d. denemede dogru bildiniz!",deneme);

   return 0;
  
}