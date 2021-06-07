#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
// Fungsi pengurutan penyisipan langsung
void StraightInsertSort()
{
int i, j, x;
for(i=1; i<MAX; i++){
x = Data[i];
j = i - 1;
while (x < Data[j]){
Data[j+1] = Data[j];
j--;
}
Data[j+1] = x;
}
}
int main()
{
int i;
srand(0);
printf("Tatsbita Thifalia\n");
 printf("20051397027\n");
 printf("MI A 2020\n");
// Membangkitkan bilangan acak
printf("DATA SEBELUM TERURUT");
for(i=0; i<MAX; i++)
{
Data[i] = (int) rand()/1000+1;
printf("\n Data ke %d : %d ", i, Data[i]);
}
StraightInsertSort();
// Data setelah terurut
printf("\n DATA SETELAH TERURUT");
for(i=0; i<MAX; i++)
{
printf("\n Data ke %d : %d ", i, Data[i]);
}
}
